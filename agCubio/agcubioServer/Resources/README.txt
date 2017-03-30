README
By: Yiliang Shi and Aaron McGhie
Date: 17 Nov 2015
Version:1.0

Features:
 - FPS timer that calculates refresh rate
 - Name is centered and set to 80% of Cube Width
 - Displays connection status in the upper right corner. Player is disconnected when they die. 
 - The original screen to start the game is displayed once the player dies. They may choose to reestablish their connect and restart the game. 
 - Center Cube Mass is in the upper right when game is in play. (Team Mass would have been used had the server been functioning properly)

 Design decisions and things to note: 
 - We decided to refresh as fast as possible and have a timer and fps display instead to updating when there's change to reduce lag. 
 - For our view scaling, we decided to do it by teamID as that would maintain a consistant view as cubes are spilt. However, due to 
 the server assigning the same teamID to all cubes, view is scaling to the mass of the total amount of cubes instead of just the sum
  of the mass of the player's cube. As such it is not WAI. However, to make it easier on the eye, we increased the scaling factor to
   compensate for the greater mess. 
- A dictionary is used to store cubes in the world for faster indexing and searching
- The mouse does not quite move the cube as intended when too close to the cube. 