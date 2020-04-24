# ENGG1340_Group_163_Project-
Text based game for ENGG 1340 Group 163 Project.
## Game: The Conquest
  Group Number: 163
## Group Members:
  Dhruv Srivastava (3035667792)\
  Tamanna Singhal (3035664647)

## Game Description
The Conquest is a **role-playing** game in which players can make various choices that affect the storyline in various ways.
The player is provided with different choices at different stages throughout the storyline and are given points 
(Health Points/Hit Points/Soldiers) based on the outcome of his/her choice. 
The points accumulated are used in battles and quests as the game progresses.


## The Random Elements:
The player is provided a random fortune cookie in the beginning of the game, with lucky color and lucky number for the day.\
During the battles where soldiers fight, the loss of strength is calculated randomly (4% - 10% of the total number).\
During some main character battles, where the strength of the opponent is random.\
There are other random elements as well which will be described later in this document.

## Data structures for storing game status:
Game status is saved at various levels of progress throughout the game.

## Dynamic memory management:
There is a frequent use of variables throughout the game which are dynamic, for instance,  the health points and the hit points etc.

## File Input/Output:
The game extensively uses file input/output to print the story and to save game status.

## Program codes in multiple files:
The storylines are stored in various text files. \
Moreover, there are a lot of functions (and their respective header files) defined in separate files,
for instance, files for different chapters and the fortune cookie function etc.

## Proper indentation and naming styles:
The program uses legible and easy to understand coding indentation. \
The variables used are named so as to increase comprehension but are not so long as to lose ease of readability.

## In-code documentation:
Most of the commits made are accompanied by appropriate messages.\ 
The functions too contain comments to make the code easier to understand.


## Main Storyline:
**Legeng(key):**
-**(MAIN Character fight):** The main character will fight the enemy (with the statistics of the enemy being displayed). The enemy will use random moves to fight with the main character.\
-**Difficulty level** specifies the number of moves after which the enemy can break your block or block your move.\
-**(Soldiers fight)**: Only the soldiers fight with the enemy’s army strength displayed next. Loss of soldiers will be calculated randomly.\
If enemy soldiers > the player’s soldiers, GAME OVER.


## Chapter 1 “The Farmlands”:
Evening, Player(You) finds himself/herself in a village injured. Then a nurse tells you where she found you. You suddenly remember everything about yourself. You tell the nurse who you are, Prince/Princess PlayerName. She asks you to drink a potion while she goes away to call the village head. You fell asleep and you dream. You see yourself standing in your room. Your father, the king of Astonia, is standing in front of you, when suddenly a sword comes piercing through his heart. He falls down and you see your uncle holding the blood-covered sword. You wake up panting and find yourself tied to the bed. The village head is standing next to you. He says that he is your evil uncle’s supporter and that he will be rewarded if he hands you to him. He goes out. You cut the rope with the dagger (2 HIT POINT for every hit) that is hidden in your arm. Growling heard outside, you walk out, and see the village head looking at the source of the noise.(MAX HEALTH: 5) (Checkpoint 1 save)\
-**Choice 1:** Either save the village head or go away.\
      -***If save:*** find out what the beast is, choose from numbers 1-5(lion/cheetah/tiger/jaguar/leopard.). You pick up the shield and run   in front of the village head and defend him from the beasts’ claw. (MAIN CHARACTER FIGHT) (Max Health: 5, Hit Point: 1 Difficulty: 0 ) Completion rewards: +50 soldiers, new armour Max Health increases to 10, you get a sword (Hit point 4) + A safe route through the enchanted forest.\
       -***Else:*** All player stats remain the same. Beast attacks you after killing the village head. (MAIN CHARACTER FIGHT) (Max Health: 5, Hit Point: 1 Difficulty: 0 ). Next day, you will be attacked by 50 of your uncle’s soldiers after you reach the Enchanted forest.\
You go ahead. It’s morning time, you reach a hut by the river where you see an old woman is trying to fill a bucket and she collapses.
-**Choice 2:** Either help the lady or go away.\
  -***If help lady:*** Completion rewards: Health replenish potion +1, a horse (equivalent to 10 soldiers) and option to go to search for the old woman’s son who did not come home since yesterday.\
  -**Choice 2a:** Find son or not.\
    -***If yes:*** go to find the man. You go deep into the woods. You find him tied by cannibals. You go near him, the cannibals are in a distance but they see you.\
     -**Choice 2a1:** untie him or fight the cannibals yourself.\
        -***If untie:*** Number of cannibals faced = 5 (MEN FIGHT 0 soldiers LOSS)\
         -***Else:*** Number of cannibals faced =5(MEN FIGHT and soldiers killed (1-3)\
     -***If no army*** then, killed and GAME OVER.\
completion rewards: New ally Cameron. The man is an archer and commands 25 soldiers of his tribe Army strength +35.\
-***Else:*** You go ahead.

## Chapter 2 “The Enchanted Forest”: 
If you do not save the village head:, then fight 25 soldiers as your uncle has been told your position by the village people.\
(Main Character fight: 1 man, 10-Heath point, 1-Hit point Difficulty: 20)(Soldiers fight 24) After the fight you try to figure out the way through the forest with the help of the map that fell from one of the soldier’s armour. \
If you save the village head, You remember the safest path through the forest, the village head told you about. You see the path in front of you and go ahead.\
You come face to face with a mysterious figure. Half like a woman, half like a tree. Choose how u are going to approach this creature:\

**Aggressively, fearfully, Politely but cautiously, indifferently and in an ignoring manner**...The creature attacks by sending its branches *(towards the sky and then downwards/ downwards and then upwards/sideways)*. ***Your choice: defend.*** You realise that you are not able to beat the creature so you try to escape but she is faster but then you spot a thin root-like structure going into the ground- moving with every move of the creature. You figure out that the root is somehow the source of her power so you take the dagger that you always keep hidden in your arm and cut the root off . \
The creature dissolves into a thick dense fog all around you. But then you hear a voice thanking you for freeing the woman who had been trapped in that vicious form for an eternity. She wishes you good luck for your quest and rewards you with (A mystical sword HIT POINT: 6, 5 Mythical creature (bear/giants/Griffins), A new armour, Max health = 20) equivalent to 250 men) .You continue forward and soon you hear a man screaming with pain:\
-**Choice 3:** Find out who it is and why he is screaming.\
   -***If yes,*** find out, you try to follow and find that person stuck inside a thick bushel with thorns piercing his entire body. Blood and and a thick green sap was oozing out of all the places the bush was touching. You try to help him but he warns you about the poisoned ivy bushes. \
   -**Choice 3a:** Help him any way.\
      -***If yes:*** You get hurt and lose health 1 HEALTH POINT LEFT (iF ONLY 1 HEALTH POINT THEN DIE) . The man is weak but he tells you about a very rare and sacred Baccara Rose Flower. He points towards the bushel and you spot a rose so dark-red that it almost looked black. You carefully reachout and pluck it. The man says to smell it because it has many mystery powers one of which is healing.You both take turns smelling it and the effect is instanuous HEALTH REPLENISH.  The man lets you keep the rose as a reward for saving his life and tells you an easy way out of the forest Rewards=+1 Health Replenish Potion.\
      -***Else:*** You take his advice and ask for his forgiveness for not being able to help. The helpless man accepts it and tells you a way out of the forest. You go on while the man still screams with pain. But as you turned you get pierced but a thorn of the bush too 1 HEALTH POINT LOSS.\
   -***Else:*** you ignore the man and wander around the forest being stung by bees the size of footballs and being poisoned by poison ivy and end up losing a lot of health 5 HEALTH POINTS. \
You encounter 20 guards. (+25 if the village head was not saved)\
After your battle with the guards, you finally get out of the forest.

## Chapter 3 “Cave Behind the waterfall”: 
As you come out of the enchanted forest, you hear the sound of a waterfall, you know that you are near a lake but you also hear a howling sound nearby. Looks like somebody/something is in pain. You know that the wild animals from the forest come to the river to drink water.\
-**Choice 4:** Follow the sound\
   -***If yes:*** You see a bear which is stuck in one of the traps laid by the hunters. Choice 4a: you can approach this bear Aggressively, fearfully, Politely but cautiously, indifferently and in an ignoring manner\
      -***If fearfully or Politely but cautiously:*** The bear talks. You are surprised. He asks you to free him.\
      -***If Aggressively, indifferent and in an ignoring manner:*** The bear attacks 3HEALTH POINT loss, the bear apologises. You are surprised that he can talk. He asks you to free him\
-**Choice4b:** Free him or go away.\
   -***If free:*** The bear asks you to give him a healing potion.\
      -**Choice4c:** Give him a healing potion or lie that you don’t have it\
         -***If yes:*** The bear heals and he joins your force with his sleuth. Rewards: 10 bears equivalent to 150 men\
         -***If no:*** His family comes, everyone is crying, you feel shameful. The bear dies. You go away.\
    -***If you do not free:*** The bear’s family comes and when they see you leaving the bear, they think that you have trapped him, you face a force of 10 bears, equivalent to 150 soldiers and the bear’s son (24 Heath Points) and 5 Hit points.(MAIN CHARACTER FIGHT) Difficulty: 15 (Soldiers FIGHT 150)\
   -***Else:*** You move forward.\


Feeling tired from all that you have been through you decide to find a place to rest. You spot a cave behind the waterfall and decide to go there. You eat some fruits and try to catch some sleep. You awake to the sound of thunder and heavy rainfall. The rain is too heavy and it is nearly impossible to go out so you decide to wait a little longer. You spot some carvings on the walls of the cave and as you follow them you see that they lead deep inside the cave. You follow them and realize it goes deeper than you realized. You reach the end and find yourself amongst rocky mountains. 

## Chapter 4:
“Mountains”: The height you are at is high above a valley but when you look up, the peak is higher above still. The rain now is a drizzle and you spot a river down in the valley...You decide to go down and go along the river because you know that it will lead to your kingdom. You start to descend but it seems harder with the rocks slippery from the rain. You have to stop on top of a rock and figure out a better way. Choose * points according to choice(use the roots, use your weapons to stick into the crevices, wait for the rain to stop completely etc. if Dhruv u can think of something else). Finally you manage to reach down to the river bank and as you walk besides it you start to notice signs of some civilization. Which is odd Because no one knew that people lived here\

-**Choice5:** Find Out about the civilization \
   -***If yes:*** you carefully approach one of the huts and tentatively knock an old man appears. Seeing your condition he lets you in. You ask the man and his family about how all the people live here and why does no one know about it. They tell That they had been wrongly accused by the king’s brother Cyrus and banished from their village so they ended up here.\ 
   -**Choice 5a:** Reveal your identity:\
      -***IF NO:*** Taking a lesson from the last time in a village you don't reveal your identity. You sympathise with them and lie that you are an explorer but got stuck in the mountains due to the rain. They provide You with some food, dry clothes and apply some salve on your cuts and you give them the sacred baccara rose as a thankyou\
      _***IF YES:*** Reveal your identity. They feel betrayed but as you continue your story they understand you. They provide You with some food, dry clothes and apply some salve on your cuts and tell you that their entire village will support you when you need it +100 Soldiers. You give them the sacred baccara rose as a thankyou. \
   -***Else:*** You hide amongst the trees and keep moving along the river.\
  As you continue through the mountains it dawns on you that soon you will have to face the man who murdered your entire family. You will have to face many dangers and even if you do succeed running a kingdom is not an easy job. You will have responsibilities and will have to make tough choices and there will be enemies watching your every move waiting to strike at the most opportune moment.\
  
-**Choice6:** quit your quest and live with the villagers:\
   -***If yes:*** (lose points)you turn back and order your troops to head back to that secret village. But as you do, you realize that the people you are heading back to had been wrongfully banished. You think about how many people would be treated wrongly if your uncle remains on the throne. You resolve to get the throne back and to take care of your people. Seeing your inability to commit to your goal, some soldiers doubt your leadership and they leave you (-20 to 30 soldiers)\
   -***Else:*** You push these thoughts aside and focus on getting the throne back from your malicious uncle and do right by your people.

## Chapter 5 “The Final Battle”:
You can now see the kingdom, the walls, the palace, and your people. Suddenly a man wearing the uniform of an army captain comes running towards you but he is not carrying a weapon.\
-**Choice7:** Attack the coming man, take a defensive stance, or do nothing.\
   -***If you attack the coming man:*** The man stops a foot away from you. You now know that he didn’t mean to attack but now it’s too late to stop your arm. You stab him in his right lung. The man is shocked, he falls. You take him in your arms. “He says that your uncle knows that you are coming. He has prepared an army, but a part of your uncle’s army wants to be on your side and that he was here to warn you and tell you the good news. The army is going”… The man closes his eyes and dies in your arms.\
   -***If you choose other two options:*** The man stops a foot away from you. You know that he isn’t there to attack you and looks happy to see you (The dialogue in green, continued) to stand on your uncle’s side but as soon as a signal is made, it will start attacking the people on your uncle’s side and that the man will be happy to command them. Also, the soldiers will be wearing a blue cloth around their neck .” The man goes back.\
   
You move forward. You see an army of 100 guards in distance. You command your forces to go ahead. (Soldiers Fight)
The gates are closed. Suddenly a man appears on the walls. He says that you still have time to surrender. You can save many lives that are going to be lost if you go forward.
-**Choice8:** Give up\
   -***If yes:*** You give up and you surrender, your army is disbanded and they go back. You are presented in your uncle’s court where you are given a death sentence by beheading.\
   
   ***GAME OVER--------------------------------------------------------------------------------------------------***\
   
   -***Else:*** You say that you will not surrender and you will be here tomorrow to fight. Your army forms a temporary shelter near the trees, away from the walls. You are anxious about tomorrow’s fight. Dawn, and a final count of your army is completed, you have (depends on choices made ) soldiers.\
   
Morning time, you and your army are ready to fight. Horns are sounded and your army charges. You come face to face with General Darius, who has come with the army of 325 men.
(MAIN CHARACTER FIGHT) Difficulty: 10 Health point: 35, Hit point: 6\
You defeat Darius. He is on his knees. He apologises and begs you to spare his life. He says that he is just serving the throne. He was loyal to your father, but he couldn’t save him or your family when your uncle attacked them in the darkness of the night. He says that he will always remain loyal to you, till his death.\

-**Choice9:** Forgive the general.\
   -***If yes:*** You leave him and he commands his soldiers to join your side. You get Darius’s soldiers - (20-30%) You have lost (3-8%) of your original army. Suddenly an arrow pierces Darius’s chest. You are shocked, you take him in your arms. He dies instantaneously. You see that a man is pointing a crossbow towards you. You recognise him, He is your cousin. \
   -***Else:***  You kill the general. Your soldiers keep fighting. Suddenly an arrow pierces your shoulder(lose 10 Health point and 1 hit point). You see that a man is pointing a crossbow towards you. You recognise him, He is your cousin. Your army kills the last man in Darius’s army and stands in formation. You have an army strength of you have lost (10-15%) of your army.\
   
Your cousin (Difficulty: 7 Health point: 45, Hit point: 8) shouts: charge and about 400 soldiers attack from the bushes and 80 soldiers come out from the gates with Darius’s son leading the army. You charge towards your cousin.Darius’s son comes in front of you.\

-***If saved general:*** He says that you didn’t kill his father and that he pledges his allegiance to you. He takes out his crossbow and starts attacking your cousin. Your cousin is hit (3-7) times losing (3-4) health points and (1) hit point with each hit. He shouts his army will follow your orders (+200 MEN) and that your cousin is all yours now. You charge towards him.\
-***Else:*** He says that the fact that Darius was fighting you was because he was loyal to the throne but as soon as you defeated him, the fight had become the fight for the throne rather than a threat to the safety of the kingdom and that he would have stopped fighting you after you had spared him his life. He puts up his crossbow and shoots at you. You defend, but as soon as you put down your shield, another arrow hits you in the other shoulder (1) Hit point loss (1-3) Health loss. He shouts to your cousin that you are all his.
You charge towards your cousin.\
(MAIN Character fight)\
You finally kill your cousin.\
(MEN fight)\
You finally see your uncle coming out of the gates. You are red with anger. You remember how he stabbed your father in front of your eyes.\
His army of  800 soldiers comes out of the gates and the gates are shut. You and your uncle charge towards each other, followed by your armies.\
(***If you didn’t kill the captain:*** You shoot a burning arrow in the sky, your uncle’s army breaks in two sides having equal soldiers and your uncle’s soldiers now faces their enemies from two fronts uncle’s soldiers - 50%, your soldiers += 50% of uncle’s soldiers)
You fight your uncle.(Difficulty: 2 Health Point: 50. Special ability block break after every 2-6 moves Hit point: 10, 1 if block break)
(MEN fight)\
Your uncle is on his back, bleeding. You can either save his life and put him in jail for the rest of his life or kill him instantly.\

-**Choice10:** Put your uncle in jail or kill him instantly.\
   -***If jail:*** You call the army doctor and ask him to save your uncle’s life. He applies bandages and medicine and bandages on his wounds. You ask the doctor to send him to jail. You get back your kingdom. Your friends are around you when you sit on the throne and wear the crown. Your uncle is in jail now, recovering. You nullify all his cruel orders he gave as a king.\
   -***Else:*** You thrust your sword into your uncle’s chest one last time to kill him. You get back your kingdom. Your friends are around you when you sit on the throne and wear the crown. You nullify all his cruel orders he gave as a king.\
**“Player name” you have won the game.**

