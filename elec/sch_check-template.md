# Schematic

## Power
[] For every rail:
  [] Solder jumper
  [] LPF (optional)

## Blocks
[] Verify all pins are imported.
[] Verify all pin names match.

## ERC
[] Transistor orientation
  [] Transistor SMT footprint pinout from datasheet matches symbol.
[] Op-amps orientation 
[] Floating wires (use 'no connect' flag)
[] ERC

## Test Points
[] Power
[] CV
[] Audio

## Annotate
[] Annotation: check each block with multi-unit parts (e.g. A,B,C,D,E)
[] Annotation: cofirm knobs, jacks, LEDs on PCB

## BoM
[] Go through all parts in KiField to verify tolerance, sub, etc
[] Run "gen-description.py"
[] Export via Eeschema
