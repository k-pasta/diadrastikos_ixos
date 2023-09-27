(
MIDIClient.init; //initialize midi
MIDIIn.connectAll; //connect to all midi devices.
s.boot; //boot the server
)

// Main oscillator
(
SynthDef(\slider_sound, {
	arg freq = 0, amp = 0.3, lfoinput = 1;
	var sig, env, ampLFO;

	var lfoFreq = 1; // Adjust the frequency as needed

	sig = SinOsc.ar(freq)!2;

	// Envelope lasts longer (adjust the release time to your liking)
	env = EnvGen.kr(Env.perc(0.01,2,1,1), doneAction: 2);

	// Amplitude modulation using the LFO
	sig = sig * env * ( amp * 0.2); // Adjust the modulation depth as needed

	Out.ar(0, sig*0.1);
}).add;
)


//global lfo
(
SynthDef(\audioPassthrough, {
    // Input audio from bus 0
    var inputAudio = In.ar(0, 2);
	var ampLFO = SinOsc.kr(3).range(-1, 1).pow(0.01); // The higher the number after kr(), the faster the oscillation
		"passed".postln;

    // Send the input audio directly to the default audio output (bus 0)
    Out.ar(0, inputAudio * 1 *ampLFO);

}).add;
)

//This starts the LFO
(
var s2 = Synth(\audioPassthrough);
)

s2.release;

// Define a MIDIdef for CC messages
(
MIDIdef.cc(\slider, {
    arg value, channel;
    [value, channel].postln;
    // Create a Synth with the defined SynthDef based on the channel
    if (channel == 13) {
        Synth(\slider_sound, [\freq, value * 5 + 50, \amp, 0.3]);
	};

	if (channel == 12) {
		Synth(\slider_sound, [\freq, value * 2 + 100, \amp, 0.3, \lfoinput, 0.1]);
	};

		if (channel == 19) {
		Synth(\slider_sound, [\freq, value * 10 + 800, \amp, 0.3, \lfoinput, 0.1]);
	};
		if (channel == 18) {
		Synth(\slider_sound, [\freq, value * 10 + 1200, \amp, 0.3, \lfoinput, 0.1]);
	};
		if (channel == 17) {
		Synth(\slider_sound, [\freq, value * 10 + 1800, \amp, 0.3, \lfoinput, 0.1]);
	};
			if (channel == 16) {
		Synth(\slider_sound, [\freq, value * 10 + 2500, \amp, 0.3, \lfoinput, 0.1]);
	};
	// You can also free the Synth when needed
    // Synth.freeAll;
});
)