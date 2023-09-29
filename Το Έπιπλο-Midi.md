<!-- Copy and paste the converted output. -->

<!-----

You have some errors, warnings, or alerts. If you are using reckless mode, turn it off to see inline alerts.
* ERRORs: 0
* WARNINGs: 0
* ALERTS: 15

Conversion time: 4.568 seconds.


Using this Markdown file:

1. Paste this output into your source file.
2. See the notes and action items below regarding this conversion run.
3. Check the rendered output (headings, lists, code blocks, tables) for proper
   formatting and use a linkchecker before you publish this page.

Conversion notes:

* Docs to Markdown version 1.0β34
* Fri Sep 29 2023 00:55:40 GMT-0700 (PDT)
* Source doc: Το Έπιπλο-Midi
* Tables are currently converted to HTML tables.
* This document has images: check for >>>>>  gd2md-html alert:  inline image link in generated source and store images to your server. NOTE: Images in exported zip file from Google Docs may not appear in  the same order as they do in your doc. Please check the images!

----->


<p style="color: red; font-weight: bold">>>>>>  gd2md-html alert:  ERRORs: 0; WARNINGs: 0; ALERTS: 15.</p>
<ul style="color: red; font-weight: bold"><li>See top comment block for details on ERRORs and WARNINGs. <li>In the converted Markdown or HTML, search for inline alerts that start with >>>>>  gd2md-html alert:  for specific instances that need correction.</ul>

<p style="color: red; font-weight: bold">Links to alert messages:</p><a href="#gdcalert1">alert1</a>
<a href="#gdcalert2">alert2</a>
<a href="#gdcalert3">alert3</a>
<a href="#gdcalert4">alert4</a>
<a href="#gdcalert5">alert5</a>
<a href="#gdcalert6">alert6</a>
<a href="#gdcalert7">alert7</a>
<a href="#gdcalert8">alert8</a>
<a href="#gdcalert9">alert9</a>
<a href="#gdcalert10">alert10</a>
<a href="#gdcalert11">alert11</a>
<a href="#gdcalert12">alert12</a>
<a href="#gdcalert13">alert13</a>
<a href="#gdcalert14">alert14</a>
<a href="#gdcalert15">alert15</a>

<p style="color: red; font-weight: bold">>>>>> PLEASE check and correct alert issues and delete this message and the inline alerts.<hr></p>


Ιόνιο Πανεπιστήμιο

Τμήμα Τεχνών Ήχου και Εικόνας

Πρόγραμμα Μεταπτυχιακών Σπουδών “Οπτικοακουστικές Τέχνες στην Ψηφιακή Εποχή”

Μάθημα: Διαδραστικός Ηχητικός Σχεδιασμός

Διδάσκοντες: Ιωάννης Ζάννος


# Το Έπιπλο-Midi


## Πειραματισμοί με midi πληροφορία και ξυλουργική.



<p id="gdcalert1" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image1.jpg). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert2">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image1.jpg "image_tooltip")


Ρήγας Κούγκολος - ava.ada2206

Κέρκυρα 2022-2023


## Εισαγωγή

Το Έπιπλο-Midi είναι ένα midi controller που λειτουργεί με την χρήση ενός Arduino Uno. Η δημιουργία ενός midi controller είναι κάτι που με ενδιέφερε απο καιρό οπότε και αποφάσισα να το κανω στα πλαίσια του μαθήματος. Η ιδέα της, επηρεασμένης από την art nouveau[^1], αισθητικής προέκυψε από την εργασία του μαθήματος “Τέχνη και Τεχνολογία”[^2], όπου επιχείρησα να φτιάξω μία κατασκευή βασισμένη στο αρχέτυπο της τηλεόρασης. Ωστόσο οι κατασκευαστικές ανάγκες με οδήγησαν στο αρχέτυπο της παλιάς, μη-επίπεδης τηλεόρασης. Έτσι σαν συνέχεια του έργου εκείνου, αν και με μία σαρκαστική διάθεση στην απαίτηση του εμπορίου η τέχνη να παράγεται από εμμονικά υποκείμενα[^3] [^4], αποφάσισα για το μουσικό όργανο, να χρησιμοποιήσω ένα αντίστοιχα παλιό αρχέτυπο, αυτό του ραδιοφώνου-έπιπλου.


## Θεωρητικό Πλαίσιο

Η εργασία ήταν σε μεγάλο βαθμό πρακτική, και δεν προηγήθηκε κάποια θεωρητική ενασχόληση. Ωστόσο πιστεύω πως έχει νόημα να γίνει λόγος για την κουλτούρα του diy που συντηρείται μέσα από τέτοια πρότζεκτ και τον διαμοιρασμό της τεχνογνωσίας που προκύπτει, κάτι που σκοπευώ να κάνω σε μία ομάδα μουσικής τεχνολογίας που συμμετέχω αραιά. Όπως και εγώ δεν θα μπορούσα να έχω κατασκευάσει το εν λόγω όργανο χωρίς τους οδηγούς για το πρωτοκολλο MIDI[^5], φίλους που μοιράστηκαν τις ξυλουργικές τους γνώσεις[^6], επεξηγηματικά βίντεο για το SuperCollider[^7], μέρος της διαδικασίας, είναι για εμένα η ζωή του έργου μετά την υλοποίηση του, μεσω της χρησης του και του διαμοιρασμού των εμπειριών κατασκευής. Δευτερευόντως, η χρήση ανακυκλωμένου ξύλου, πέρα από προσωπικό χόμπι, είναι και προταγματική επιλογή, αλλά και σε πιο προσωπικό επίπεδο, κάτι που δίνει στο έργο μια προσωπική ιστορία του πως η πρόσοψη του είναι από κόντρα πλακέ πάτους συρταριών από ανακαίνιση γραφείου, τα τοιχώματα απο ταβλες διπλου κρεβατιού, το συρτάρι από μελαμίνη βιβλιοθήκης επαγγελματικού χώρου και τα εσωτερικά στηρίγματα από πόδια παιδικού τραπεζιού ζωγραφικής.


## Στόχοι και ερωτήματα

Γνωρίζοντας πως το πρότζεκτ είναι μεγάλο για εμένα, περιορίστηκα στους εξής στόχους.



* Το όργανο να λειτουργεί με καλώδιο midi[^8].


* Να μπορώ να προγραμματίσω σε ποιό κανάλι στέλνω την πληροφορία.
* Να παραπέμπει αισθητικά σε έπιπλο, ιδανικά του προηγούμενου αιώνα.


## Τεχνική ανάλυση

Αντιλαμβάνομαι πως η επέκταση μου πάνω στο θέμα της ξυλουργικής ξεφεύγει του ζητούμενου της εργασίας, αλλά θα ήταν άδικο να μην μιλήσω για αυτό, καθώς ήταν πολύ μεγάλο κομμάτι της. Προσωπικά, δεν έχω καποιο background στην ξυλουργική, ούτε συγγενείς ή συγκατοίκους που να ασχολούνται. Αυτό πρακτικά σήμαινε πως μεγάλο μέρος της ενασχόλησης μου γινότανε με παρακάμψεις και χωρίς καθόλου ασφάλεια (παραδείγματος χάρη, να κρατάω με το ένα χέρι το ξύλο, με το αλλο τη σεγα, και με την πατούσα να το στηρίζω). Αυτό που έχει σημασία, είναι πως το συγκεκριμένο πρότζεκτ αποτέλεσε την αφορμή, να κατασκευάσω έναν πάγκο εργασίας, που είναι η πιό δυσκολη κατασκευή που έχω κάνει ως τώρα, με μεγάλη ακρίβεια, 8 συνδέσμους μόρσου - εγκοπής[^9], κλπ.


<table>
  <tr>
   <td colspan="3" >

<p id="gdcalert2" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image2.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert3">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


<img src="images/image2.png" width="" alt="alt_text" title="image_tooltip">


<p id="gdcalert3" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image3.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert4">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


<img src="images/image3.png" width="" alt="alt_text" title="image_tooltip">

   </td>
  </tr>
  <tr>
   <td>

<p id="gdcalert4" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image4.jpg). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert5">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


<img src="images/image4.jpg" width="" alt="alt_text" title="image_tooltip">

   </td>
   <td>

<p id="gdcalert5" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image5.jpg). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert6">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


<img src="images/image5.jpg" width="" alt="alt_text" title="image_tooltip">

   </td>
   <td>

<p id="gdcalert6" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image6.jpg). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert7">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


<img src="images/image6.jpg" width="" alt="alt_text" title="image_tooltip">

   </td>
  </tr>
  <tr>
   <td colspan="3" ><em>Εικόνες 1-5. Το έπιπλο που ενεπνευσε το σχέδιο, το τρισδιάστατο μοντέλο που σχεδίασα, εικόνες από την κατασκευή, το τελικό αποτέλεσμα</em>
   </td>
  </tr>
</table>


Στη συνέχεια σχεδίασα και κατασκεύασα το Έπιπλο-Midi πάνω στον πάγκο εργασίας:


<table>
  <tr>
   <td>

<p id="gdcalert7" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image7.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert8">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


<img src="images/image7.png" width="" alt="alt_text" title="image_tooltip">

   </td>
   <td>

<p id="gdcalert8" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image8.jpg). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert9">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


<img src="images/image8.jpg" width="" alt="alt_text" title="image_tooltip">

   </td>
   <td>

<p id="gdcalert9" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image9.jpg). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert10">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


<img src="images/image9.jpg" width="" alt="alt_text" title="image_tooltip">

   </td>
  </tr>
  <tr>
   <td colspan="3" ><em>Εικόνες 6-8. Το τρισδιάστατο μοντέλο, εικόνες από την κατασκευή.</em>
   </td>
  </tr>
</table>


Η πρόσοψη χαράχτηκε με laser[^10], στο λογισμικό Lightburn.


<table>
  <tr>
   <td>

<p id="gdcalert10" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image10.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert11">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


<img src="images/image10.png" width="" alt="alt_text" title="image_tooltip">

   </td>
   <td>

<p id="gdcalert11" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image11.jpg). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert12">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


<img src="images/image11.jpg" width="" alt="alt_text" title="image_tooltip">

   </td>
   <td>

<p id="gdcalert12" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image12.jpg). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert13">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


<img src="images/image12.jpg" width="" alt="alt_text" title="image_tooltip">

   </td>
  </tr>
  <tr>
   <td colspan="3" ><em>Εικόνες 9-11. Το σχέδιο</em>[^11]<em> για το ένα από τα δύο μέρη, η τηλεδιάσκεψη στην οποία παρακολουθούσα το λέιζερ για λόγους ασφαλείας, η εικόνα πάνω στο όργανο.</em>
   </td>
  </tr>
</table>


Στη συνέχεια σύνδεσα τα ποτενσιόμετρα και τα κουμπιά. Τα κουμπιά διακόπτουν την σύνδεση των sliders, σαν mute channel. Τα 4 sliders και τα 2 περιστρεφόμενα ποτενσιόμετρα είναι αθροιστικά 6, το μεγιστο που μπορεί να δεχτεί σαν είσοδο το arduino uno, όσον αφορά αναλογική είσοδο πληροφορίας, χωρίς την χρήση multiplexer. Μπροστά από τα κουμπιά έχω βάλει κομμάτια από ξύλο για να τους δώσω την αίσθηση κουμπιών παλιού κασετοφώνου, αλλά αυτό επιδέχεται βελτίωση ακόμα.


<table>
  <tr>
   <td>

<p id="gdcalert13" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image13.jpg). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert14">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


<img src="images/image13.jpg" width="" alt="alt_text" title="image_tooltip">

   </td>
   <td>

<p id="gdcalert14" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image14.jpg). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert15">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


<img src="images/image14.jpg" width="" alt="alt_text" title="image_tooltip">

   </td>
   <td>

<p id="gdcalert15" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image15.jpg). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert16">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


<img src="images/image15.jpg" width="" alt="alt_text" title="image_tooltip">

   </td>
  </tr>
  <tr>
   <td colspan="3" ><em>Εικόνες 12-14. Εικόνες από την σύνδεση των καλωδίων</em>
   </td>
  </tr>
</table>


Στη συνέχεια, έγραψα τον κώδικα για το arduino[^12], βασιζόμενος σε κάποιες δοκιμές που είχα κάνει πρίν κάποιους μήνες όταν πρωτοξεκίνησα να ασχολούμαι με την εργασία. Το ενδιαφέρον εδώ είναι πως ο κώδικας που παρήγαγε τα πιό αξιόπιστα αποτελέσματα ήταν αυτός που δεν χρησιμοποιούσε καμία βιβλιοθήκη για midi πληροφορία, αλλά μπορούσες να δείς με πολύ μεγάλη ακρίβεια τι πληροφορία στέλνει. Χρησιμοποίησα επίσης το πρόγραμμα MidiView για να μπορώ να βλέπω ακριβώς τι διαβάζει η κάρτα ήχου και να κάνω debugging.

Τέλος, έκανα κάποιες δοκιμές στο ableton, αλλά αποφάσισα να δοκιμάσω και το supercollider[^13] για την παραγωγή ήχου. To τελικό αποτέλεσμα είναι αρκετά πρωτόγονο, αλλά λειτουργεί. Αυτό που έχω προσπαθήσει να κάνω είναι καθένα από τα 6 ποτενσιόμετρα να παράγει ημιτονοειδή ήχο σε διαφορετικά φάσματα συχνοτήτων, και όλα μαζί να περνάνε από έναν μίκτη που δίνει ρυθμό μέσω ενός LFO. Πιο συγκεκριμένα, αυξομειώνει περιοδικά την ένταση καθε ήχου που παράγεται. Όπως φαίνεται και στα παραθέματα όπου παραθέτω όλες μου τις συνομιλίες (τουλάχιστον την τελική τους μορφή) χρησιμοποίησα εκτενώς το chatbot ChatGPT 3.5. Αξίζει να αναφέρω πως γενικά έχει πολλά να προσφέρει, αλλά η κατανόηση του για τον τρόπο λειτουργίας του SuperCollider είναι περιορισμένη. Συχνά προέκυπταν θέματα που δεν μπορούσε να λύσει το ίδιο και οι λύσεις ερχόταν από άλλες πηγές. Ήταν ωστόσο μία πολύ χρήσιμη, άμεσα-προσβάσιμη, αναξιόπιση πηγή.


## Συμπεράσματα

Πολλά πράγματα θα μπορούσαν να βελτιωθούν στην κατασκευή, ιδίως όσον αφορά τις θέσεις των καλωδίων και της πλακέτας του arduino, καθώς και θα μπορούσαν να προστεθούν. Το Έπιπλο-Midi, εχει ενα συρτάρι, στο οποίο θα ήθελα κάποια στιγμή να δοκιμάσω να βάλω δύο ξύλινους δίσκους σαν turntables, και να στέλνουν και αυτά πληροφορία MIDI μέσω rotary encoders. Το βασικό θέμα είναι πως δεν γνωρίζω πως λειτουργούν τέτοια όργανα, καθώς δεν έχω χρησιμοποιήσει ποτέ. Θα προσπαθήσω να δανειστώ κάποιο και να διαβάσω την πληροφορία που στέλνει. Χρειάζεται επίσης τρίψιμο και βερνίκι, ενδείξεις στην μηδενική θέση για τα ποτενσιόμετρα, βελτίωση των κουμπιών, και ξύλο για την πάνω μεριά των sliders. Συνολικά είμαι ικανοποιημένος από τον πειραματισμό.


## Βιβλιογραφία


    **Βιβλία:**


    Tschudi-Madsen, Stephan. _The Art Nouveau Style: a comprehensive guide with 264 illustrations_. Courier Corporation, 2002.


    **Άρθρα:**


    Chatterjee, Anjan. "The neuropsychology of visual art: Conferring capacity." _International review of neurobiology_ 74 (2006): 39-49.


    Weber, Ryan. "The Artistic Worker Versus the White-collar Professional: Workaholism, Work/nonwork Interference and Enhancement, and Obsessive Compulsive Behavior in Two Samples." (2011).


    Lehrman, Paul D., and Tim Tully. "What is MIDI?." (2017).


    **Ιστοσελίδες:**


    3PA Formation. “Éducation, Formation, Insertion.” Accessed September 27, 2023. https://www.3paformation.fr/education-formation-insertion/.


    Crypto Museum “DIN.” Πρόσβαση 27 Σεπτεμβρίου, 2023. 


    **Βίντεο:**


    Eli Fieldsteel._ SuperCollider Tutorial: 9. MIDI, Part I_. Accessed September 27, 2023. https://www.youtube.com/watch?v=Oz4KYZ9KLc0.


    Olivier Verdier. _COMMENT FAIRE UN TENON ET UNE MORTAISE AU CISEAU À BOIS_. Πρόσβαση 27 Σεπτεμβρίου, 2023. https://www.youtube.com/watch?v=8S4HxV5KAEU.




## Παραθέματα


#### Συζητήσεις με το ChatGPT 3.5

[SuperCollider: Execute Code Blocks](https://chat.openai.com/share/61bc8b35-c9e1-4ad4-a3f0-acdd27f5dd3d)

[Create SuperCollider Sound Code](https://chat.openai.com/share/94952f12-2416-47e1-8454-ab754aca87a9)

[Creating Kick Drum Sounds](https://chat.openai.com/share/791da280-3eb4-4223-a0df-c112e20ed984)

[SuperCollider Syntax Overview](https://chat.openai.com/share/670f620f-18c0-4284-b76f-dca881248fa0)

[Debugging MIDI Synth Code](https://chat.openai.com/share/0ba43a26-72c6-4d9c-9e83-5fe2999c9d0a)

[Modulate Synth Amplitude SuperCollider](https://chat.openai.com/share/8c8655a2-dcfc-4c7c-91e4-610a05b2a86f)

[Audio Passing Synth Supercollider](https://chat.openai.com/share/e97386b3-9467-4d89-be65-1e2aa0c165cc)


#### Κώδικας Arduino


```
#include <MIDI.h>

MIDI_CREATE_DEFAULT_INSTANCE();

// -----------------------------------------------------------------------------

// This example shows the old way of checking for input messages.
// It's simpler to use the callbacks now, check out the dedicated example.

#define LED 13                   // LED pin on Arduino Uno

// -----------------------------------------------------------------------------

void BlinkLed(byte num)         // Basic blink function
{
    for (byte i=0;i<num;i++)
    {
        digitalWrite(LED,HIGH);
        delay(50);
        digitalWrite(LED,LOW);
        delay(50);
    }
}

// -----------------------------------------------------------------------------

void setup()
{
    pinMode(LED, OUTPUT);
    MIDI.begin();           // Launch MIDI, by default listening to channel 1.
}

void loop()
{
    if (MIDI.read())                // Is there a MIDI message incoming ?
    {
        switch(MIDI.getType())      // Get the type of the message we caught
        {
            case midi::ProgramChange:       // If it is a Program Change,
                BlinkLed(MIDI.getData1());  // blink the LED a number of times
                                            // correponding to the program number
                                            // (0 to 127, it can last a while..)
                break;
            // See the online reference for other message types
            default:
                break;
        }
    }
}



```



#### 


#### Κώδικας Supercollider


```
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
```



<!-- Footnotes themselves at the bottom. -->
## Notes

[^1]:
     Αναλυτικά:
    
    Tschudi-Madsen, Stephan. _The Art Nouveau Style: a comprehensive guide with 264 illustrations_. Courier Corporation, 2002.

[^2]:
     Ολόκληρη η εργασία στον παρακάτω σύνδεσμο: 
    	

[^3]:
     Παράδειγμα μιας έρευνας που εκκινεί από την υπόθεση πως οι εμμονικοί χαρακτήρες είναι εγγενώς καλλιτεχνικοί: 
    
    Chatterjee, Anjan. "The neuropsychology of visual art: Conferring capacity." _International review of neurobiology_ 74 (2006): 39-49.

[^4]:
     Μια έρευνα στις εργασιακές συνήθειες εργαζόμενων στην τέχνη συγκριτικά με εργαζόμενους γραφείου:
    
    Weber, Ryan. "The Artistic Worker Versus the White-collar Professional: Workaholism, Work/nonwork Interference and Enhancement, and Obsessive Compulsive Behavior in Two Samples." (2011).

[^5]:
    Ο οδηγός που διάβασα:
    
    Lehrman, Paul D., and Tim Tully. "What is MIDI?." (2017).

[^6]:
     Η σχολή ξυλουργικής οπου γνωρίζω αρκετό κόσμο:
    
    3PA Formation. “Éducation, Formation, Insertion.” Accessed September 27, 2023. https://www.3paformation.fr/education-formation-insertion/.

[^7]:
     Παράδειγμα:
    
    Eli Fieldsteel. _SuperCollider Tutorial: 9. MIDI, Part I_. Accessed September 27, 2023. https://www.youtube.com/watch?v=Oz4KYZ9KLc0.

[^8]:

     Crypto Museum “DIN.” Πρόσβαση 27 Σεπτεμβρίου, 2023. https://www.cryptomuseum.com/ref/conn/din/index.htm.

[^9]:
     Olivier Verdier _COMMENT FAIRE UN TENON ET UNE MORTAISE AU CISEAU À BOIS_. Πρόσβαση 27 Σεπτεμβρίου, 2023. https://www.youtube.com/watch?v=8S4HxV5KAEU.

[^10]:
     Συγκεκριμένα το laser διόδου: SCULPFUN S10

[^11]:
<p>
     Η εικόνα προέρχεται από εδώ:
<p>
    
    ameede.com. “Flower Border Vector Art G0000004 File Cdr and Dxf Free Vector Download for Laser Cut – Download Vector.” Πρόσβαση 27 Σεπτεμβρίου, 2023. https://www.ameede.com/flower-border-vector-art-g0000004-file-cdr-and-dxf-free-vector-download-for-laser-cut/.

[^12]:
     Ολόκληρος ο κώδικας στα παραθέματα της εργασίας.

[^13]:
     Επίσης.
