# COMP313 - Jack Rodgers - Assignment 1 - AIPerceptron

## Link to video demonstration
- https://youtu.be/Xfe9Tpklgsk

> **Note:** There are multiple classes in the source folder, however
> MyBlueprintFunctionLibrary is the only important one, the others 
> were just experimenting.

## Brief game description

In the small game I made to demonstrate the technology I used, I made a game one half pacman, and one half metal gear.
The pacman half is collecting the coins and avoiding the guards, while the metal gear half is the basic sneaking around.
The main actions are sneaking and collecting coins. The hardest part to make was the AIPerceptron, and the most interesting bit is the AIPerceptron. What a surprise.
Developed with Unreal Engine 4

## Technology description

I implemented an AIPerceptron based detection system into my game. It's made up of two main parts, the PatrollingAIController and the Behaviour Tree.
The AIPerceptron object in the PatrollingAIController creates a viewcone for the AI, so that when another pawn steps into it the AI will detect it, the PatrollingAIController will then use this detection to set variables that the behaviour tree can then act upon.

The main variable set is the state, which has four options stored in an enum:
- Idle, for when the player isn't in the same room as the AI pawn, the AI pawn will not move.
- Patrolling, for when the player is in the same room as the AI but hasn't been seen, the AI will move between it's preset target points.
- Following, for when the player is in the AI's sight, the AI will move towards the player.
- Searching, for when the player was in the AI's sight, the AI will move towards the last seen location and look around.
The behaviour tree has a branch for each of these options excluding idle, which just stops the tree from working.

The support for this technology is partially there, however it isn't entirely blueprint friendly, and the AI pawns would attack each other if they could see each other, so I had to add a check to make sure it was the player pawn. There is a lot of documentation for the feature so it was straightforward to found out what I needed.

The hardest part to implement was the behavoiur tree, because it took quite a while to make sure the check flow was correct, so that the AI didn't skip stages or go to a stage it shouldn't, as well as getting the timing right so it didn't just immidiately jump on the player in an unfair way.

The technology is currently used as a detection system in games. It can be used for sound as well as sight, so it's used to detect noises the player makes as well. It's primarily used for AI, but can also be used as a more versatile box trigger replacement, like using it as a moving camera in a stealth game.

In future games this could be used to make better AI that acts more like a human player would, with a simulated sight and hearing rather then knowing where all real players are at all times. Adding an element of strength to the sight and hearing to have the AI doubt itself could also make it play more like a human.

## Checklist
- Control a character on screen: 
WASD to move, CTRL for crouch, P for pause.
- Change score on screen: 
The amount of coins you have.
- Create/destroy objects: 
Destroy a coin when you touch it.
- Move NPCs around: 
Yeah they do that.
- Play sounds: 
Sound on coin pickup and background music.
- Restart a level: 
Can be done from the pause menu or on win/lose.
- Show a final screen: 
Get to the end or get caught and it does.
- Create a settings menu: 
Press P, has music and sfx volume sliders.
- Create at lease one blueprint node in C++: 
I made rotator, which is used in the lookaround function for when the AI needs to look around.
