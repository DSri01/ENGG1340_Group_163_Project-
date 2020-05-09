# ENGG1340_Group_163_Project-
Text based game for ENGG 1340 Group 163 Project.
## Game: The Conquest
  Group Number: 163
## Group Members:
  Dhruv Srivastava (3035667792): DSri01
  
  Tamanna Singhal (3035664647): tamannasinghal

## Game Description
The Conquest is a **role-playing** game in which players can make various choices that affect the storyline in various ways.

The player is provided with different choices at different stages throughout the storyline and are given points (Health Points/Hit Points/Soldiers) based on the outcome of his/her choice.

The points accumulated are used in battles and quests as the game progresses.

## Instruction to play

**Step 1: Create the executable Game file** 

The game is played by first entering command "make Game", which creates an executable file "Game".

*Note:* You can use "make clean" command to remove all .o files

**Step 2: Run the executable file**

Run the executable file Game by the command "./Game"

**Step 3: Enjoy**

Just simply follow the game instructions that will be presented to you one by one when you start playing, for example, Enter s to continue, Enter your choice 1, 2 or 3, etc.

For Character Battles: enter left, right, above, or below as your moves to fight. 

**For exiting game:** Exit when asked after completion of Chapters or intentionally lose the game (Your progress will not be stored if you lose).

***Warning:*** Please enter as the characters as the game says as it is case sensitive. For example, when the game says enter 'Y' to do something please enter 'Y' only.


## Coding requirements:
### 1. The Random Elements:
The player is provided a random fortune cookie in the beginning of the game, with lucky color and lucky number for the day.

During the battles where soldiers fight, the loss of strength is calculated randomly (4% - 10% of the total number).

During some main character battles, where the strength of the opponent is random.

The moves of enemy in the character battles are random.

The following functions have random elements:

**Battle:**

The moves of enemy are random.

**Fight:**

The number of casualties is random.

Also, the function uses mercnum variable.

**Fortune_cookie:** The sentence, colour and lucky number are random.
There are other random elements as well in between some chapters, like strengh of enemy soldiers.

### 2. Data structures for storing game status:
Game status is saved at various levels of progress throughout the game.

Dynamic variables are passed through different functions. These dynamic variables store all the game status and they are deleted once they are not needed.

The values of some dynamic variables is also stored in different .txt files for loading the game later.

### 3. Dynamic memory management:
The player status throughout the game is stored in dynamic variables, which are deleted when the game is exited or when the function is ended.

Nearly all functions use dynamic variables for nearly all the tasks, which are deleted when the variables are not needed anymore.

The pointers of these dynamic variables are passed to different functions where changes are made in them and they are deleted once they are not needed anymore.

Delete_game() function uses vector.

### 4. File Input/Output:
The game extensively uses file input/output to print the story and to save game status.

The following functions use File I/O:

**load and load_game:** To load game from a .txt file in Saved_Games directory.

**save and save_game:** To save game status in a .txt file in Saved_Games directory.

**Delete_game:** To delete previously saved games in Saved_Games directory and updating the Saved_Games.txt and Saved_Games_num.txt files in Saved_Games directory.

**PrintChapLines:** To print storyline for all chapter functions from .txt files in the Chapters directory.

**Fortune_cookie:** To print the random sentence and colour from Fortune_Cookies.txt file in Chapters directory.

### 5. Program codes in multiple files:
Nearly all the functions are defined in different cpp and header files like:
Battle.cpp, Battle.h, Fight.cpp, Fight.h, Delete_game.cpp, Fortune_cookie.cpp, PrintChapLines.cpp, load_game.cpp, save_game.cpp, etc.

The storylines are stored in various text files within Chapters.

The Game is implemented using all the functions being called from one another, for instance, the main function calls the Chap1 function, which in turn calls Battle, Fight, PrintChapLines, etc. functions.

### 6. Proper indentation and naming styles:
The program uses legible and easy to understand coding indentation.

The variables used are named so as to increase comprehension but are not so long as to lose ease of readability.

Example:

Pname for Player Name.

Phitp for Player Hit Points.

Pheal for Player Health Points.

Psol for Number of soldiers in Player's army.

### 7. In-code documentation:
Most of the commits made are accompanied by appropriate messages.

The functions too contain comments to make the code easier to understand, yet more information about each function can be found in this README.md file under the "Description of functions" heading.

## Description of functions:
### 1. Battle
This function is used for character battles. It returns true if player loses and false if player wins the fight.

The moves of the enemy are **random**

It uses **Dynamic variables** for processing inputs and outputs.

### 2. Fight
This function is used for army battles. It returns true if player loses and false if player wins the fight.

The number of casualities is **random**.

It uses **Dynamic variables** for processing inputs and outputs.

### 3. Fortune_cookie
This function prints a **random** fortune cookie(lucky numbers, colour and sentences).

It also uses **File I/O** to print a **random** sentence and colour from a .txt file in Chapters directory

It uses **Dynamic variables** for processing inputs and outputs.

### 4. PrintChapLines
This function uses **File I/O** to print the story for all chapters from different .txt files in Chapters directory

It uses **Dynamic variables** for processing inputs and outputs.

### 5. load_game, Delete_game, and save_game
These functions use **File I/O** to load or delete a previously stored game or save a new game in .txt files in Saved_Games directory. They use the number stored in Saved_Games_num.txt file and list of saved games stored in Saved_Games.txt to achieve their goal.

Delete_game also uses **vectors** to store the list of previously saved games.

They use **Dynamic variables** for processing inputs and outputs.

### 6. Choice
This function uses sstream to record the choice of player and ensures that it is within the number of possible inputs.

It uses **Dynamic variables** for processing inputs and outputs.

### 7. Chap1, Chap2, Chap3, and Chap4
These functions use if-else, nested if and if-else-if statements to implement the chapters.

They return true if player loses the game and false if player survives in the current chapter.

They also call functions like Battle, Fight, PrintChapLines, and Choice for implementing the game.

They use **Dynamic variables** for processing inputs and outputs.

### 8. load, save and Exit_Game
These functions are in the THE_CONQUEST.cpp file, which also contains the main function.

**load:**

The "load" function is called after welcome message and fortune cookie function (if player opts to take a fortune cookie).

The "load" function calls the load_game function if the number of saved games (taken from Saved_Games_num.txt in Saved_Games directory using **File I/O**) is greater than 0. Please note that if no previously saved game is found then "No games available to load." is printed.

**save:**

The "save" function calls the save_game function if the user wants to save the current game (A player can save game before Chapter 1 and after Chapter 2 and Chapter 3).

**Exit_Game:**

The "Exit_Game" function calls the "Delete_game" function and exits the game. It is called if the player loses the game or the player wants to exit the game (The option to exit game is available only after Chapter 2 and Chapter 3).

## Main Storyline:
**Legeng(key):**
-**(MAIN Character fight):** The main character will fight the enemy (with the statistics of the enemy being displayed). The enemy will use random moves to fight with the main character.

-**Difficulty level** specifies the number of moves after which the enemy can break your block or block your move.

-**(Soldiers fight)**: Only the soldiers fight with the enemy’s army strength displayed next. Loss of soldiers will be calculated randomly.
If enemy soldiers > the player’s soldiers, GAME OVER.

***Please note:*** There might be slight differences between the storyline below and the actual storyline in the game.

### Chapter 1 “The Farmlands”:
Evening, Player(You) finds himself/herself in a village injured. Then a nurse tells you where she found you. You suddenly remember everything about yourself. You tell the nurse who you are, Prince/Princess PlayerName. She asks you to drink a potion while she goes away to call the village head. You fell asleep and you dream. You see yourself standing in your room. Your father, the king of Astonia, is standing in front of you, when suddenly a sword comes piercing through his heart. He falls down and you see your uncle holding the blood-covered sword. You wake up panting and find yourself tied to the bed. The village head is standing next to you. He says that he is your evil uncle’s supporter and that he will be rewarded if he hands you to him. He goes out. You cut the rope with the dagger (2 HIT POINT for every hit) that is hidden in your arm. Growling heard outside, you walk out, and see the village head looking at the source of the noise.(MAX HEALTH: 5)\
-**Choice 1:** Either save the village head or go away.
      -***If save:*** find out what the beast is, choose from numbers 1-5(lion/cheetah/tiger/jaguar/leopard.). You pick up the shield and run   in front of the village head and defend him from the beasts’ claw. (MAIN CHARACTER FIGHT) (Max Health: 5, Hit Point: 1 Difficulty: 0 ) Completion rewards: +50 soldiers, new armour Max Health increases to 10, you get a sword (Hit point 4) + A safe route through the enchanted forest.
       -***Else:*** All player stats remain the same. Beast attacks you after killing the village head. (MAIN CHARACTER FIGHT) (Max Health: 5, Hit Point: 1 Difficulty: 0 ). Next day, you will be attacked by 50 of your uncle’s soldiers after you reach the Enchanted forest.
You go ahead. It’s morning time, you reach a hut by the river where you see an old woman is trying to fill a bucket and she collapses.
-**Choice 2:** Either help the lady or go away.
  -***If help lady:*** Completion rewards: Health replenish potion +1, a horse (equivalent to 10 soldiers) and option to go to search for the old woman’s son who did not come home since yesterday.
  -**Choice 2a:** Find son or not.
    -***If yes:*** go to find the man. You go deep into the woods. You find him tied by cannibals. You go near him, the cannibals are in a distance but they see you.
     -**Choice 2a1:** untie him or fight the cannibals yourself.
        -***If untie:*** Number of cannibals faced = 5 (MEN FIGHT 0 soldiers LOSS)
         -***Else:*** Number of cannibals faced =5(MEN FIGHT and soldiers killed (1-3)
     -***If no army*** then, killed and GAME OVER.
completion rewards: New ally Cameron. The man is an archer and commands 25 soldiers of his tribe Army strength +35.
-***Else:*** You go ahead.

### Chapter 2 “The Enchanted Forest”: 
If you do not save the village head:, then fight 25 soldiers as your uncle has been told your position by the village people.
(Main Character fight: 1 man, 10-Heath point, 1-Hit point Difficulty: 20)(Soldiers fight 24) After the fight you try to figure out the way through the forest with the help of the map that fell from one of the soldier’s armour.
If you save the village head, You remember the safest path through the forest, the village head told you about. You see the path in front of you and go ahead.
You come face to face with a mysterious figure. Half like a woman, half like a tree. Choose how u are going to approach this creature:

**Aggressively, fearfully, Politely but cautiously, indifferently and in an ignoring manner**...The creature attacks by sending its branches *(towards the sky and then downwards/ downwards and then upwards/sideways)*. ***Your choice: defend.*** You realise that you are not able to beat the creature so you try to escape but she is faster but then you spot a thin root-like structure going into the ground- moving with every move of the creature. You figure out that the root is somehow the source of her power so you take the dagger that you always keep hidden in your arm and cut the root off .
The creature dissolves into a thick dense fog all around you. But then you hear a voice thanking you for freeing the woman who had been trapped in that vicious form for an eternity. She wishes you good luck for your quest and rewards you with (A mystical sword HIT POINT: 6, 5 Mythical creature (bear/giants/Griffins), A new armour, Max health = 20) equivalent to 250 men) .You continue forward and soon you hear a man screaming with pain:
-**Choice 3:** Find out who it is and why he is screaming.
   -***If yes,*** find out, you try to follow and find that person stuck inside a thick bushel with thorns piercing his entire body. Blood and and a thick green sap was oozing out of all the places the bush was touching. You try to help him but he warns you about the poisoned ivy bushes.
   -**Choice 3a:** Help him any way.
      -***If yes:*** You get hurt and lose health 1 HEALTH POINT LEFT (iF ONLY 1 HEALTH POINT THEN DIE) . The man is weak but he tells you about a very rare and sacred Baccara Rose Flower. He points towards the bushel and you spot a rose so dark-red that it almost looked black. You carefully reachout and pluck it. The man says to smell it because it has many mystery powers one of which is healing.You both take turns smelling it and the effect is instanuous HEALTH REPLENISH.  The man lets you keep the rose as a reward for saving his life and tells you an easy way out of the forest Rewards=+1 Health Replenish Potion.
      -***Else:*** You take his advice and ask for his forgiveness for not being able to help. The helpless man accepts it and tells you a way out of the forest. You go on while the man still screams with pain. But as you turned you get pierced but a thorn of the bush too 1 HEALTH POINT LOSS.
   -***Else:*** you ignore the man and wander around the forest being stung by bees the size of footballs and being poisoned by poison ivy and end up losing a lot of health 5 HEALTH POINTS.
You encounter 20 guards. (+25 if the village head was not saved)
After your battle with the guards, you finally get out of the forest.

### Chapter 3 “Cave Behind the waterfall”: 
As you come out of the enchanted forest, you hear the sound of a waterfall, you know that you are near a lake but you also hear a howling sound nearby. Looks like somebody/something is in pain. You know that the wild animals from the forest come to the river to drink water.
-**Choice 4:** Follow the sound
   -***If yes:*** You see a bear which is stuck in one of the traps laid by the hunters. Choice 4a: you can approach this bear Aggressively, fearfully, Politely but cautiously, indifferently and in an ignoring manner
      -***If fearfully or Politely but cautiously:*** The bear talks. You are surprised. He asks you to free him.
      -***If Aggressively, indifferent and in an ignoring manner:*** The bear attacks 3HEALTH POINT loss, the bear apologises. You are surprised that he can talk. He asks you to free him
-**Choice4b:** Free him or go away.
   -***If free:*** The bear asks you to give him a healing potion.
      -**Choice4c:** Give him a healing potion or lie that you don’t have it
         -***If yes:*** The bear heals and he joins your force with his sleuth. Rewards: 10 bears equivalent to 150 men
         -***If no:*** His family comes, everyone is crying, you feel shameful. The bear dies. You go away.
    -***If you do not free:*** The bear’s family comes and when they see you leaving the bear, they think that you have trapped him, you face a force of 10 bears, equivalent to 150 soldiers and the bear’s son (24 Heath Points) and 5 Hit points.(MAIN CHARACTER FIGHT) Difficulty: 15 (Soldiers FIGHT 150)
   -***Else:*** You move forward.


Feeling tired from all that you have been through you decide to find a place to rest. You spot a cave behind the waterfall and decide to go there. You eat some fruits and try to catch some sleep. You awake to the sound of thunder and heavy rainfall. The rain is too heavy and it is nearly impossible to go out so you decide to wait a little longer. You spot some carvings on the walls of the cave and as you follow them you see that they lead deep inside the cave. You follow them and realize it goes deeper than you realized. You reach the end and find yourself amongst rocky mountains. 

### Chapter 4 "THE FINAL BATTLE":
You have reached the farmlands surrounding the castle.

Everyone seems to be surprised to see you.
Until now, your uncle had kept the citizens under the impression that some assassins came into the castle and killed you and your father.

You keep going forward.

You are close to a hut when suddenly an army captain comes running towards you.
The man is armed, but he is running towards you alone, with no troops in sight.
will you: take a defensive stance, disarm him or kill him?

**If Defensive stance or disarm:** Turns out that he was an ally and he has 300 - 400 men under his command.

He offers you help. Will you take it?

-**if yes:** You get 300-400 soldiers calculated **randomly**.

-**else:** You refuse the offer.

**If you kill him:** you will lose the chance to get 300-400 soldiers
  
You go forward.
You see the gates and you see your uncle and your cousin leading that army.
You ask your uncle to surrender but he refuses.
...
Battle horns are played and both the armies rush towards one another.
You notice that the first wave of the army is moving in an triangular formation.

**Choose a formation**

As the forces come closer, you see that they were civilians whose hands were tied with a stick and ordered to run towards you and your army.

You order your soldiers to stop attacking them.
You free them and you see that an army of about 550 soldiers is coming closer as you move civilians away from the battlefield.
As soon as the last civilian is removed from the battlefield, you order your soldiers to charge.

...
Suddenly you hear something...

...

Before you know, a cannonball falls close to you and you fell on the ground.
You can't hear anything as you watch a flock of birds flying in the sky.
You get up and see that all your soldiers are fighting and you see your uncle charging towards you.

He hits you with an arrow.(1 Hit Point Lost).

You try to maintain your stance but he hits you again with an arroww. (1 Hit Point Lost)

**MAIN CHARACTER FIGHT** Enemy Cyrus

**Army Fights against 150 soldiers**

If player wins the above two battles:
**“Player name” you have won the game.**
