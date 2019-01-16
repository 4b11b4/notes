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
     - 4 layer board: two inner layers as GND plane
   

