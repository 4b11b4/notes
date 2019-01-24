# Autorouting (with Freerouter)
To run:
java -jar /path/to/freeroute.jar

## Exporting Specctra File (.dsn) from KiCad 5
1. Run DRC
1. Fill planes ('B' hotkey)
  * If 4-layer board, should only have GND planes on inner layers to 
    encourage Freeroute to use a GND via everywhere it can. Otherwise it will
    end up running GND to an island on outer layers.
2. File > Export > SpecctraDSN...

## Setup Freeroute
1. Layer Visibility: Display > Layer Visibilty > Maximum All
  - If you are on a board with more than 2 layers, it may be confusing if you
    do not set this.
2. Autoroute Parameter: Parameter > Autoroute
  - Ensure all layers are active.

## Pass Types
* Only select one pass type at a time. If you select Autoroute and
  Postroute you will have to wait forever for the Postroute to finish.
### Fanout
* Have not found a need for this yet... creates a ton of vias.

### Autoroute
#### Detailed Parameter
* Parameter > Autoroute > Detail parameter [button]
- Via Costs: 3
- Powerplane via costs: 1
- Start pass: 1
- Ripup start costs: 100
- F.Cu:   1, 3
- In1.Cu: 2, 20
- In2.Cu: 2, 20
- B.Cu:   1, 3

### Postroute
* Do not select this.
* Definitely do not include after your Autoroute.
  - You want to be able to manually select this so you can export and rename
    the Specctra session before running Postroute.
* Only a thing that you do overnight.

## Stopping the Current Routing Operation
* Click anywhere with the cursor (careful!).
