# Component PCB
1. Place jacks. Rename according to natural annotation of schematic. This
allows for the schematic to be re-annotated without problems.
2. Manually layout a hierarchical block ONCE. Use replicatelayout.py for other
blocks.
3. Place LED blocks first.

## Placement (design for autoroute)
1. If top layer routing is vertical, place ICs (SOIC, TSSOP, etc) with pads on
   the sides.
   Then, bottom layer routing will be horizontal, and ICs can be rotated with
   pads at the top and bottom.
