# Autorouting (with Freerouter)
To run:
java -jar /path/to/freeroute.jar

## Pass Types
1. Fanout
  * Allows automatic power plane vias. Also creates many vias.
2. Autoroute
  * Route only F & B.Cu first (toggle visibility)
    - They are less likely to have the ground plane anyway, so no need to
      route on internal layers, as this is more likely to break planes.
3. Postroute
  * Usually never select this.
  * Definitely do not include after your Autoroute.
    - You want to be able to manually select this so you can export and rename
      the Specctra session before running Postroute.
  * Only a thing that you do overnight...
  

## Detailed Parameter

