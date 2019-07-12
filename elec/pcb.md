# Component PCB
## Before Routing
1. Set up net classes with the assistance of local labels in each block.
2. Power planes
   * Ideal for autorouting:
     - 4 layer board:
       1: signal + power
       2: GND
       3: power
       4: signal
          OR
       1: signal + power
       2: power
       3: GND
       4: signal
3. Labeling (silkscreen)
   * jumpers, RED LINE, version number, board name

## First Time Eurorack Placement
1. Place jacks, knobs, LEDs.
   a. Open art PCB, component PCB, and component SCH.
      * At this point in time, there should be no parts on the component PCB.
   b. One at a time, click on any jack from the component PCB, identify the 
      function from the component SCH and then copy x,y location from art PCB.
      and paste locations from the art board.
2. Place power connector, jumpers.
3. Lock all components on board.

## Placement Strategy ("design for autoroute")
1. Place parts to minimize routing congestion.
   * (e.g.) Routing on layer is horizontal:
       - rotate SOIC,TSSOP,etc pads to top and bottom
       - rotate passives parallel to routing direction

## Rough Placement #1
1. Place all ICs in order of signal path. Don't worry about any other parts.
   * Rotate IC properly with regards to routing direction on that layer.
2. If there is not much extra room, you may decrease the size of passives.
   * If you decrease the size, re-do Rough Placement #1.

## Rough Placement #2
1. One at a time, for each block that can be hierarchically replicated,
   do the placement, and replicate.
   * It may be possible to steal pre-replicated blocks from other PCBs by
     copying and pasting the block and matching the annotations.
2. Re-place all blocks which were replicated.
   * Remember to place __with__ the flow of routing.
3. Rinse and repeat.

## DRC
1. Satisfy the DRC complaints about component keepouts, etc.

## Freeroute
1. See [freeroute.md] for how to setup freeroute.
2. Attempt routing.
3. You can consider the route a failure if at the start of each pass you
   still have close to the same number of unrouted nets. 
4. If the autorouter cannot complete, but there are only 10 unrouted nets left,
   you can accept the route and finish it yourself.
5. If the router is a failure, save the session anyways and import into PcbNew.
6. Examine the routing and identify where it is congested. It will be obvious.
7. Spread out any parts in congested areas and go back to step 2.

## Post-route Manual Cleanup
1. Clean up:
   * traces coming out of QFNs, vias underneath
   * prevent traces being routed under ICs (TSSOPs, SOICs, etc)
     - Some designs may be too dense to prevent this.
