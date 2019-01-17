# Component PCB
1. Place jacks. Rename according to natural annotation of schematic. This
allows for the schematic to be re-annotated without problems.
2. Lock jacks and pots and any other jumpers.
2. Manually layout a hierarchical block ONCE. Use replicatelayout.py for other
blocks.
3. Place LED blocks first.
4. Replicate and place blocks in order of signal path.
   1. Capacitive touch
   2. Audio
   3. Everything else 
6. Set up Net Classes.
7. Power Planes:
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
   ** With Freeroute, you can't designate which signals go to which
      layer, so any high speed signals must be routed by hand.

## Placement (design for autoroute)
1. If top layer routing is vertical, place ICs (SOIC, TSSOP, etc) with pads on
   the sides. Then, bottom layer routing will be horizontal, and ICs can be
   rotated with pads at the top and bottom.
