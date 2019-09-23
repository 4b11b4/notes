# Schematic

## Power
[] For every rail:
  [] Solder jumper, 0 ohm, LPF
[] User accessible rails are short-circuit protected
[] Reverse polarity for connectors which can be inserted incorrectly 

## Transistors
[] Resistor to every gate & base
[] Check symbol and footprint orientation against datasheet

## Comparators
[] Correct orientation (+/-)
[] Unused units tied correctly (all pins to common)
[] Outputs have pull-ups/downs

## Opamps
[] Correct orientation (+/-)
[] Unused units tied correctly (output to neg, pos to common)
[] No capacitors or zeners directly at outputs (need series resistance)

## Main Schematic
[] Verify all local nets go somewhere (i.e. Ctrl+F each net)

## Schematic Blocks
[] Verify all pins are imported
[] Verify all pin names match
[] Verify no local labels are named the same as hierarchical labels 

## Test Points
[] Power
[] Audio

## Jumpers
[] Between each block

## Annotate
[] Annotation: check each block with multi-unit parts (e.g. A,B,C,D,E)
[] Annotation: cofirm knobs, jacks, LEDs on PCB

## ERC
[] Transistor orientation
  [] Transistor SMT footprint pinout from datasheet matches symbol
[] Floating wires (use 'no connect' flag)
[] ERC

## BoM
[] Go through all parts in KiField to verify tolerance, sub, etc
[] Run "gen-description.py"
[] Export via Eeschema
