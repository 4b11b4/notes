# Schematic Design Procedure
## General Notes
* Design in a way to increase amount of things that can be autorouted. i.e. Grouping hierarchical sheets that will share power. e.g. All opamps dealing with CV logic share the same power net whereas opamps for audio share a different power net. However, sometimes grouping does not make sense for the "flow" of a schematic. In this case, creating a local label (KiCad) for the power net is sufficient.

## Procedure
* If followed, this procedure reduces time spent designing a schematic in the immediate and exponential future.

1. Create a copy of the template project. This includes common blocks to get started.
1. Place hierarchical blocks in the main schematic. Do not place any wires, power symbols, or local labels.
2. Group hierarchical blocks further into sheets based on how they will be powered. This allows power planes to be placed for specific groups and allows the autorouter (Freeroute) to route in a way that maintains a proper "star ground". Sometimes it does not make sense to place blocks in further nested hierarchical block to give them the same power net. In this case a specific power symbol or local label can be used.
3. ERC
4. Assign footprints.
  * KiField may be useful when changing footprint for all SMT passives.
6. Verify transistor orientation on schematic matches footprint.
9. Verify hierarchical blocks are not missing any pins.
  - Press (Alt+M) and check every sheet recursively.
  - This would be a good script...
4. Clear annotation for entire schematic.
  - If you assign jacks references on PCB according to schematic, you should
    be able to clear the annotation without problems.
5. Annotate entire schematic.
6. Check new IC symbol against datasheet.
