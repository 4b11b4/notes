# Instructions made with KiCad 5.0
# BoM Export via 1clickBOM (Chrome/Firefox Plugin)
2. Install 1clickBOM (https://1clickbom.com)
* Go to the website and choose the Chrome or Firefox installation button.

3. Get the BoM Export Script used in the KiCad Schematic Editor.
* You can clone the repository via:
git clone https://github.com/monostable/1clickBOM.git
OR
* Download a zip file:
https://github.com/monostable/1clickBOM/archive/master.zip

The output scripts are located at:
1clickBOM/output_scripts/

4. Load your project and open KiCad's Schematic Editor.
5. From the Top Menu, go to Tools -> Generate Bill of Materials...
6. A box will pop up. Press "Add Plugin".
7. Navigate to where you saved the 1clickBOM folder and inside you will find a folder named "output_scripts".
8. Add the "fields" and "descriptions" scripts.
9. Try the "fields" script first.
10. Open your BoM with a spreadsheet editor (e.g. LibreOffice Calc).
11. If your BoM is not finished, use the autocomplete from 1clickBOM!
* https://1clickbom.com/#completion 
* If it can't find all of your parts, then...
12. Use KiField to easily edit the part fields in a spreadsheet instead of wasting your time clicking around.
* https://github.com/xesscorp/KiField
* https://xesscorp.github.io/KiField/docs/_build/singlehtml/index.html

# BoM Editing via KiField (command line utility)
1. 
