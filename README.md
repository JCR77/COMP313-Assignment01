# COMP313 - Jack Rodgers - Assignment 1 - AIPerceptron

## Brief game description

In the small game I made to demonstrate the technology I used, I made a game one half pacman, and one half metal gear.
The pacman half is collecting the coins and avoiding the guards, while the metal gear half is the basic sneaking around.
The main actions are sneaking and collecting coins. The hardest part to make was the AIPerceptron, and the most interesting bit is the AIPerceptron. What a suprise.
Developed with Unreal Engine 4

## Brief game description

I implemented an AIPerceptron based detection system into my game. It's made up of two main parts, the PatrollingAIController and the Behaviour Tree.
The AIPerceptron object in the PatrollingAIController creates a viewcone for the AI, so that when another pawn steps into it the AI will detect it, the PatrollingAIController will then use this detection to set variables that the behaviour tree can then act upon.
