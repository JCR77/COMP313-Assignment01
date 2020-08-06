# COMP313 - Jack Rodgers - Assignment 1 - AIPerceptron

## Link to video demonstration
- https://youtu.be/Xfe9Tpklgsk

## Brief game description

In the small game I made to demonstrate the technology I used, I made a game one half pacman, and one half metal gear.
The pacman half is collecting the coins and avoiding the guards, while the metal gear half is the basic sneaking around.
The main actions are sneaking and collecting coins. The hardest part to make was the AIPerceptron, and the most interesting bit is the AIPerceptron. What a suprise.
Developed with Unreal Engine 4

## Brief game description

I implemented an AIPerceptron based detection system into my game. It's made up of two main parts, the PatrollingAIController and the Behaviour Tree.
The AIPerceptron object in the PatrollingAIController creates a viewcone for the AI, so that when another pawn steps into it the AI will detect it, the PatrollingAIController will then use this detection to set variables that the behaviour tree can then act upon.

The main variable set is the state, which has four options stored in an enum:
- Idle, for when the player isn't in the same room as the AI pawn, the AI pawn will not move.
- Patrolling, for when the player is in the same room as the AI but hasn't been seen, the AI will move between it's preset target points.
- Following, for when the player is in the AI's sight, the AI will move towards the player.
- Searching, for when the player was in the AI's sight, the AI will move towards the last seen location and look around.

The support for this technology is partially there, however it isn't entirely blueprint friendly, and the AI pawns would attack each other if they could see each other, so I had to add a check to make sure it was the player pawn. There wasn't a whole lot of documentation for it either like there was other features.

