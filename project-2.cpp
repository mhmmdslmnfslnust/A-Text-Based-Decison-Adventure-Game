#include<iostream>
#include<cstdlib>
#include<ctime>
#include <algorithm>
#include <vector>
#include<chrono>
#include<thread>
using namespace std;
//Player characteristics
int playerHealth = 100;
int  playerRespect = 0;
//Characteristics of treasure beast that appers in last challenge 
int treasurebeast=100;
//Challenge counter
int counter=0;

 
// Function declarations
void intro();
void instructions();
void startGame();
void challengeintro();
//challenge1 and its subfunctions.
void challenge1();
void challengeRiver();
void challengeBridge();
void challengeboat();
//challenge2 and its subfunctions.
void challenge2();
void exploreClearing();
void followLights();
void beast();
void climbAncientTree();
//challenge3 and its subfunctions.
void challenge3();
void solveRiddle();
void raceChallenge();
//challenge 4 ans it subchallenges
void challenge4();
void book();
void templeScenario1();
void templeScenario2();
void useTorch();void feelYourWay();
void ancientMapGuidance();
//challenge 5 ans it subchallenges
void challenge5();
void silentSteps();
void confrontStatues();
void distractWithItem();
void doorPuzzle();


//challenge6 and its subfunction
void challenge6();
void solveRiddle2();
void returnToOldMan();
void shareGloryStory();
void blockedPath();
void mysteriousVoice();
void wanderWithoutOldMan();
//challenge7 and its subfunction
void challenge7();
void wellriddle();
void parrotOptions();
//challenge8
void challenge8();
//challenge9 and its subfunctions.
void challenge9();
void displayIntroduction();
void challengeEnchantedDoor();
void challengeWhisperingWalls();
void challengeChamberOfIllusions();
void displaySuccess();
//challenge10 and its subfunctions.
void challenge10();
void riddleScenario();
void puzzleScenario();
void displayWordMatrix(const std::string words[]);
bool guessWords(std::string words[]);
void battleScenario();
void userinput2();
void userinput1();
void userinput3();
void finalglory();
//miscellinous
int respect2(int& x);
void goodbye();
void beastHealth(int x);
void badbye();
int health(int& x);
int respect(int& x);
int end();
//main starts here
int main() {
    cout << "Welcome to the treasure hunt" << endl;
    cout << "You find yourself on the shores of the Forgotten Isles, ready to begin your quest." << endl;
    cout << "Your journey starts now..." << endl;
    
    intro();  // Call the intro function for introductory lines

    return 0;
}
//intro function defined
void intro() {
    char option1; // option 1 for the initial menu;

    
        cout << "1: Start the game" << endl << "2: Instructions" << endl << "3: End the game" << endl;
        cin >> option1;

        switch (option1) {
            case '1':
                return startGame();  // Start the game function
            case '2':
                return instructions();  // Instructions function
            case '3':
                cout << "Thanks for playing" << endl;
                 end();
            default:
                cout << "Wrong instruction and we refresh the page for you " << endl;this_thread::sleep_for(chrono::seconds(1));cout<<"Redfreshing..";system("clear");system("CLS");
                return intro();
        }
    
}
int end(){
    return 0;
}
void instructions() {
    system("clear");system("CSL");
    cout << "You are a lone warrior. Now you are on your own to go and find the last treasures on the island. Use all the instructions carefully given during the game, and we wish you all the best." << endl;
    cout << "Return to the main menu" << endl << "1: Yes" << endl << "2: No" << endl;
    char ret;
    cin >> ret;
    switch (ret) {
        case '1':
            return intro();  // Return to the main menu
        case '2':
            cout<<"Ok so you want to stay then we refresh the page for you"<<endl;this_thread::sleep_for(chrono::seconds(2));cout<<"Redfreshing..";system("clear");system("CLS"); instructions();
            default : cout<<"invalid input and the page is refreshed for you"<<endl;this_thread::sleep_for(chrono::seconds(2));cout<<"Redfreshing..";system("clear");system("CLS");instructions();
    }

    
}

void startGame() {
system("clear");system("CSL");
    cout << "You find yourself on the shores of the Forgotten Isles, ready to begin your quest." << endl;
    cout << "Your journey starts now..." << endl;
     challenge1();

    
}

void challenge1() {
    counter=0;
    challengeintro();
    cout << "You come across a rickety bridge spanning a deep chasm. The bridge looks unstable, but it's the only way forward." << endl;
    cout << "1: Cross the bridge cautiously" << endl;
    cout << "2: Look for an alternate route" << endl;

    char choice, choice1;
    cin >> choice;

    if (choice == '1') {
         challengeBridge() ;
          // Continue to the next challenge
    } else if (choice == '2') {
        cout << "You search for an alternate route but find none. All of a sudden, you saw a damaged boat" << endl;
        cout << "Will you like to go from the boat (1) or back to the bridge (2)" << endl;
        cin >> choice1;
        if (choice1 == '1') {
            return challengeboat();
        } if(choice1 == '2'){
            return challengeBridge();
            }else{cout << "Invalid choice. You are back to start of scenario" << endl;this_thread::sleep_for(chrono::seconds(2));cout<<"Redfreshing..";system("clear");system("CLS");
        return challenge1();}
        // TODO: Add consequences for choosing this option
    } else {
        cout << "Invalid choice. You are back to start of scenario" << endl;this_thread::sleep_for(chrono::seconds(2));cout<<"Redfreshing..";system("clear");system("CLS");
        return challenge1();
    }

      // Continue to the next challenge
}
void challengeboat() {
    cout << "Oh gosh, it has a hole in it and it starts drowning" << endl;
    cout << "Do something:Press (1) to JUMP OR (2) to TRY TO HANDLE IT: ";
    char boat;
    cin >> boat;
    if (boat == '1') {
        cout<<"You jumped and tries to make it and ";
         challengeRiver();
          // End the game
    } else if (boat == '2') {
        cout<<"You trying to handle it and ";
         challengeRiver(); // End the game
    }else {cout<<"invalid input and you are back to start of scenario"<<endl;this_thread::sleep_for(chrono::seconds(2));cout<<"Redfreshing..";system("clear");system("CLS");challengeboat();}
}
void challengeRiver(){
    srand(time(0));
    int u=rand()%2+1;
    if(u==1){
        cout<<"Oh yes you made it easily without any loss of health"<<endl;respect(playerRespect);challenge2();
    }else{ cout<<"Oh no you got difficulty while crossing and your health drops to  ";health(playerHealth);challenge2();}   
}
void challengeBridge(){
    srand(time(0));
    int u=rand()%2+1;
    if(u==1){
        cout<<"You tries to cross the bridge now and make it to other end without any problem"<<endl;respect(playerRespect);
        challenge2(); 
    }else {cout<<"you tries to cross the Bridge now but Oh no the bridge is shaky and oh you you couldnot handle this and falls into river. You try to swim and   "<<endl; challengeRiver();} 
}
void challenge2(){
    counter=1;
    challengeintro(); 
    cout << "Challenge 2: The Enchanted Forest" << endl;
    cout << "As you leave the river behind, you find yourself entering a mysterious enchanted forest. The air is thick with magic, and strange lights flicker in the distance." << endl;
    cout << "1: Explore the clearing" << endl;
    cout << "2: Follow the lights" << endl;
    cout << "3: Climb the ancient tree" << endl;

    char choice;
    cin >> choice;

    switch (choice) {
        case '1':
            exploreClearing();
            break;
        case '2':
            followLights();
            break;
        case '3':
            climbAncientTree();
            break;
        default:
            cout << "Invalid choice. You feel lost in the enchantment of the forest. So we refresh all for you" << endl;this_thread::sleep_for(chrono::seconds(2));cout<<"Redfreshing..";system("clear");system("CLS");
            challenge2();
            break;
    }
}




void exploreClearing() {
    cout << "You decide to explore a small clearing in the forest. The atmosphere is serene, and you discover a hidden chest." << endl<<"1:Open the chest"<<endl<<"2:Leave it and return"<<endl;
     char choice;
    cin >> choice;

    switch (choice) {
        case '1':
            cout<<"You opens the chest and it has a hidden ingredients and ";respect(playerRespect); cout<<"Now you head forward but you find no way to go ahead so forcefully you have to return back and ";respect2(playerRespect);cout<<"\nNow you are back and decides to:"<<endl<<"1:follow light light trail\n2)Climb ancient tree";
            char choice2;
            cin >> choice2;
            if(choice2=='1'){followLights();}if(choice2=='2'){climbAncientTree();}else{
                cout << "Invalid choice. You feel lost in the enchantment of the forest. So we refresh all for you" << endl;this_thread::sleep_for(chrono::seconds(2));cout<<"Redfreshing..";system("clear");system("CLS");
            exploreClearing();
            }  
            break;
        case '2':
            cout<<"You leave it as it and return to go back and ";respect2(playerRespect);cout<<"\nNow you are back and decides to:"<<endl<<"1:follow light light trail\n2)Climb ancient tree";
            char choice1;
            cin >> choice1;
            if(choice1=='1'){followLights();}if(choice1=='2'){climbAncientTree();}else{
                cout << "Invalid choice. You feel lost in the enchantment of the forest. So we refresh all for you" << endl;this_thread::sleep_for(chrono::seconds(2));cout<<"Redfreshing..";system("clear");system("CLS");
            exploreClearing();
            }            
            break;
        default:
            cout << "Invalid choice. You feel lost in the enchantment of the forest. So we refresh all for you" << endl;this_thread::sleep_for(chrono::seconds(2));cout<<"Redfreshing..";system("clear");system("CLS");
            exploreClearing();
            break; 
    
}}
void followLights() {
    cout << "Intrigued by the magical lights, you follow their trail deeper into the forest. The lights lead you to a mystical fountain." << endl<<"A beast is there sleeping and you decide to:"<<endl<<"1:Return and go back."<<endl<<"2:Go past it and look in fountain"<<endl;
     char choice;
    cin >> choice;

    switch (choice) {
        case '2':
            cout<<"You go ahead tries to go past the beast and ";respect(playerRespect);cout<<"Now you are passing by beast."<<endl; 
            beast();
            break;
        case '1':
            cout<<"You leave it as it and return to go back and ";respect2(playerRespect);cout<<"\nNow you are back and decides to:"<<endl<<"1:Explore the clearing\n2)Climb ancient tree"<<endl;
            char choice1;
            cin >> choice1;
            if(choice1=='1'){exploreClearing();}if(choice1=='2'){climbAncientTree();}else{
                cout << "Invalid choice. You feel lost in the enchantment of the forest. So we refresh all for you" << endl;this_thread::sleep_for(chrono::seconds(2));cout<<"Redfreshing..";system("clear");system("CLS");
            exploreClearing();
            }            
            break;
        default:
            cout << "Invalid choice. You feel lost in the enchantment of the forest. So we refresh all for you" << endl;
            this_thread::sleep_for(chrono::seconds(2));cout<<"Redfreshing..";system("clear");system("CLS");
            followLights();
            break; 
    }
}
void beast(){
    srand(time(0));
    int u=rand()%2+1;
    if(u==1){
        cout<<"Beast stays sleeping and remains unaware of you. So you get a look of the fountain and it has a map.You pick the map and it leads to the hidden treasure"<<endl;cout<<"Now you go ahead to continue your mission. Also ";respect(playerRespect);challenge3();
    }else{cout<<" Dang you disturbed the beast and it get ups from sleep. You decide to:"<<endl<<"1:Run back\n 2:Try to Dodge the beast."<<endl;
       char choice2;                 
       cin>>choice2;
       if(choice2=='1'){
          cout<<"You runs back. Monster tries to chase you but you some how escape.";respect2(playerRespect);
          cout<<"Meanwhile your health reduces to";health(playerHealth); 
          }if(choice2=='2'){cout<<" You try to dodge the beast but it got slight hold of you but luckily you escape and\n after a while manage to get the map from the fountain. You escape the beast and open map to find out that \nit is a treasure map.During all this  ";respect(playerRespect);cout<<" and your health reduces to ";health(playerHealth);challenge3(); }
    }
}
void climbAncientTree() {
    cout << "You choose to climb a massive ancient tree, gaining a bird's-eye view of the enchanted forest. From the top, you spot a distant treasure glimmering." << endl;
    cout<<"You want to follow that but are clueless about what to do. Suddenly something struck to you and you decide to look for any of other two parts.  You turn and come back. Meanwhile ";respect(playerRespect);
    cout<<"\nNow you are back and decides to:"<<endl<<"1:follow light light trail\n2)explore clearing"<<endl;
            char choice1;
            cin >> choice1;
            if(choice1=='1'){followLights();}if(choice1=='2'){exploreClearing();}else{
                cout << "Invalid choice. You feel lost in the enchantment of the forest. So we refresh all for you" << endl;
                this_thread::sleep_for(chrono::seconds(2));cout<<"Refreshing..";system("clear");system("CLS");
            climbAncientTree();
            }            
            
    
}
void badbye() {
    cout <<endl<< "So this way your jorney ends while you die your respect was "<<playerRespect<<" \n \n";
    this_thread::sleep_for(chrono::seconds(1));
    cout<<"Press enter to continue to main menu"<<endl;
    getchar();
    system("clear");system("CLS");
    return intro();  // End the game
}int health(int& playerHealth){ 
    playerHealth -=10;
    if(playerHealth<=0){cout<<"0 and you dies";badbye();}else{
    cout<<playerHealth<<"  and you survies for the mission"<<endl;}
    return playerHealth;

}int respect(int& x){
    
    playerRespect +=20;
    cout<<"Your respect increases to "<<playerRespect<<endl;
    return playerRespect;

}int respect2(int& x){
    
    playerRespect -=10;
    cout<<"your respect decreases to "<<playerRespect<<endl;
    return playerRespect;

}
void challenge3() {
    counter=2;
    char choice;
    challengeintro(); 
    cout << "Challenge three.\nNow as you head with the map in hand, you navigate through the dense forest. The map leads you to a mysterious clearing." << endl;
    cout << "In the clearing, you encounter a group of mystical creatures. They offer you a challenge." << endl;
    cout << "1: Accept the challenge" << endl;
    cout << "2: Try to negotiate" << endl;

    cin >> choice;

    if (choice == '1') {
        solveRiddle();       
    } else if (choice == '2') {
        cout << "You try to negotiate with the creatures, but they are not interested. They challenge you to a race instead." << endl;
        raceChallenge();
          } else {
        cout << "Invalid choice. The creatures are unimpressed. You are back to the start of the scenario." << endl;
        this_thread::sleep_for(chrono::seconds(2));cout<<"Redfreshing..";system("clear");system("CLS");
        challenge3(); // Restart the challenge
    }
}

void solveRiddle() {
    cout << "The creatures present you with a riddle:" << endl;
    cout << "I speak without a mouth and hear without ears. I have no body, but I come alive with the wind. What am I?" << endl;
    cout<<"You are also given with the options and two tries only:\n1:echo\n2:reverbation\n3:thought\n4:idea\n";
    char playerAnswer;
    for(int i=1;i<3;i++){
    cout << "Your input no "<<i<<" :";
    cin>>playerAnswer;
    if(playerAnswer=='1'){
        cout << "Congratulations! You solved the riddle and ";respect(playerRespect)  ; challenge4();
  }else{if(i==1){
        cout<<"Oh your answer is wrong. Now try again for last time:"<<endl;
  }else{
    cout << "Incorrect again. The creatures are unimpressed. They attack you now and behead you.So your health falls bellow " << endl;playerHealth=10;health(playerHealth);
  }}}
}

void raceChallenge() {
    cout << "The creatures lead you to a track in the forest, and the race begins." << endl;
    cout << "Scenario 1: Obstacle Course" << endl;
    cout << "The creatures guide you through a path filled with obstacles. Jump over logs, dodge tree branches, and navigate through a maze of vines.First round of race begins." << endl;
    int point=0;
    // Logic for the obstacle course challenge
    if (rand() % 2 == 0) {  // 50% chance of failure
        cout << "You run and stumble over a log and fall. The creatures pass you, and you lose the obstacle course challenge.Also your health falls to "; health(playerHealth);cout<<"Meanwhile ";respect2(playerRespect);
    } else {
        cout << "You navigate the obstacle course with agility, smoothly overcoming each challenge.Now " <<respect(playerRespect)<< endl; point++;
    }
    char option;
    cout<<"Press any key to continue:";
    getchar();getchar();
    cout << "Scenario 2: Sprint through Meadow" << endl;
    cout << "Now the race takes you through a beautiful meadow filled with tall grass. Sprint as fast as you can while avoiding hidden holes and uneven terrain."<<endl;
    // Logic for the sprint through meadow challenge
    if (rand() % 2 == 0) {  // 50% chance of failure
        cout<<"You trip over a hidden hole in the meadow. The creatures take the lead, and you lose the sprint challenge.So ";respect2(playerRespect) ;
        
    } else {
        cout << "You sprint gracefully through the meadow, avoiding obstacles with ease.Beasts are mesmerized and ";respect(playerRespect);point++;
    }
    if(point<2){
    cout<<"Press any key  to continue:"<<endl;
    getchar();// Scenario 3: River Crossing
    cout << "Scenario 3: River Crossing" << endl;
    cout<<"As you approach a river, the creatures challenge you to a river crossing. Jump across stepping stones and navigate the river's flow without getting wet." << endl;

    // Logic for the river crossing challenge
    if (rand() % 2 == 0) {  // 50% chance of failure
        cout << "You misjudge a jump and fall into the river. The creatures cross successfully, and you lose the river crossing challenge. and your health falls to " ;health(playerHealth);cout<<"You are pulled out of river but ";respect2(playerRespect);
    } else {
        cout << "You make daring leaps from stone to stone, skillfully crossing the river without getting wet.Also ";respect(playerRespect);point++;
    }
    }if(point>=2){
        cout<<"You mananged to clear "<<point<<" out of 3 and are able to made your way forward while keeping your head high.\n Also now "<<respect(playerRespect); challenge4();
    }else{
        cout<<"You could not clear 2 challenges successfully. Now the beast is not happy with you and attack you. So your health falls to ";playerHealth=10;health(playerHealth) ;       
    }

}
void challenge4() {
    counter=3;
challengeintro(); 
char choice;
    cout << "Challenge 4: The Hidden Temple" << endl;
    cout << "As you successfully clear the race challenges, the creatures guide you to a hidden temple deep within the forest." << endl;
    cout << "The entrance is adorned with mysterious symbols, and a faint glow emanates from within." << endl;

    cout << "You realize that this temple was not visible on the map you obtained earlier. However, you notice a peculiar key-type symbol on the map, hinting at its hidden location." << endl;

    cout << "1: Enter the temple" << endl;
    cout << "2: Explore the surroundings first" << endl;

    
    cin >> choice;

    if (choice == '1') {
        cout << "You decide to enter the ancient temple." << endl;
        templeScenario1();
        
    } else if (choice == '2') {
        cout << "You decide to explore the area around the temple before entering. During your exploration, you discover nothing so you decide to go inside temple.Wrong desicion making costs you respect loss as " ;respect2(playerRespect);templeScenario1();
    } else {
        cout << "Invalid choice. Let us refresh it for you.." << endl;
        this_thread::sleep_for(chrono::seconds(2));cout<<"Redfreshing..";system("clear");system("CLS");
        challenge4(); // Restart the challenge
    }
}
void templeScenario1() {
    cout << "Scenario 1: The book of Puzzles" << endl;
    cout << "Upon entering the temple, you find yourself in a chamber " << endl;
    cout<<"You try to look for clue that could lead you to that key or help you further. Suddenly you find a book there."<<endl<<"1) Pick the book up"<<endl<<"2)Don't pick the book up"<<endl;
   char bok;
   cin>>bok;
   if(bok=='1'){
       book();
   }else if(bok=='2'){
    cout<<"You decide not to pick the book. And roam around but find nothing there so you come back outside the temple.But there is nothing for you to look for so you are back at door and enter meanwhile ";respect2(playerRespect);templeScenario1();
   }else{ cout << "Invalid choice. You hesitate in the chamber, unsure of your next move. Let us refresh for you" << endl; templeScenario1();}
}
void book(){
    cout<<"You decide to open the book. And as soon you open it walls of temple shakes \nand a cage is built arround you. Frightened by this you try to find a way to escape\n but there is nothing so you open the book and finds it has four cards in it.\nAlso there are instructions to arrange them in any of \nthe given sequence in only two attempts where a failure in any \nattempt will give you severe damage"<<endl;
    cout<<"Choose any of following four:"<<endl<<"1:2,3,1,4"<<endl<<"2:1,3,2,4"<<endl<<"3:2,4,1,3"<<endl<<"4:3,1,4,3"<<endl;
      for(int i=1;i<3;i++){
      char option;
      cout<<"Your attempt no "<<i<<" ";cin>>option;
      if(option=='2'){
         cout << "Congratulations! You successfully navigate the puzzles and discover a hidden key." << endl;
        cout << "The key might unlock a hidden passage deeper within the temple." << endl;templeScenario2();
      } else { if(i<2){
        cout << "Oh no! The puzzles proved too challenging, and ancient traps are triggered." << endl;
        cout << "You narrowly escape, but your health is compromised to " << endl;playerHealth-=10;
        health(playerHealth);}else if(i==2){
            cout << "All attempts failed. Your health falls to ";playerHealth=10;health(playerHealth);
        }
        
    }}
}
void templeScenario2() {
    cout << "Scenario 2: The Shadowy Passage" << endl;
    cout << "After solving the puzzle. Now the cage gets removed itself and some movement happens in the floor. Floor carpets get removed, and a mysterious path appears. You decide to go there." << endl;
    cout << "How would you like to navigate the dark passage?" << endl;
    cout << "1: Use Torch" << endl;
    cout << "2: Feel Your Way" << endl;
    cout << "3: Consult Ancient Map Guidance" << endl;
    char passageChoice;
    cin >> passageChoice;
    switch (passageChoice) {
        case '1':
            useTorch();
            break;
        case '2':
            feelYourWay();
            break;
        case '3':
            ancientMapGuidance();
            break;
        default:
            cout << "Invalid choice. You hesitate in the dark passage, unsure of your next move. Let us refresh for you" << endl; 
            this_thread::sleep_for(chrono::seconds(1));cout<<"Refreshing..";system("clear");system("CLS");
            templeScenario2();
            // You can add additional handling or consequences for invalid choices
            break;
    }
}
// ... (previous code)

void useTorch() {
    cout << "You decide to use a torch to light your way through the dark passage." << endl;

    int outcome = rand() % 2;  // Randomly choose between success (1) and failure (0)

    if (outcome == 1) {
        cout << "Success! The warm glow of the torch illuminates the path, revealing ancient murals and secrets of the temple.Meanwhile " ;respect(playerRespect);
        cout << "You emerge unscathed on the other side and discover a hidden chamber with a mysterious altar." ;
    } else {
        cout << "Uh-oh! The light attracts lurking creatures in the shadows. A sudden ambush leaves you wounded." << endl;
        cout << "You must fend off the attackers, compromising your health.How ever you pass it. You health drops to " ;health(playerHealth);cout<<"Also ";respect2(playerRespect);
    }
    challenge5();
}

void feelYourWay() {
    cout << "Trusting your instincts, you choose to feel your way through the darkness." << endl;
    int outcome = rand() % 2;  // Randomly choose between success (1) and failure (0)
    if (outcome == 1) {
        cout << "Success! Your tactile senses guide you flawlessly through the twists and turns of the passage." << endl;
        cout << "You emerge unscathed on the other side and discover a hidden chamber with a mysterious altar." << endl;respect(playerRespect);
      } else {
        cout << "Unfortunately, missteps lead you to a concealed trap, triggering an ancient mechanism." << endl;
        cout << "You manage to survive, but your health is compromised.You health drops to " << health(playerHealth)<<"Also "<<respect2(playerRespect);
    }
    challenge5();
}
void ancientMapGuidance() {
    cout << "You decide to consult the ancient map you obtained earlier for guidance." << endl;
    int outcome = rand() % 2;  // Randomly choose between success (1) and failure (0)
    if (outcome == 1) {
        cout << "Success! The map reveals a hidden code that guides you through the safest path in the passage." << endl;
        cout << "You avoid dangers and find a hidden key in a grand chamber." << endl;respect(playerRespect);
        // TODO: Add logic for obtaining the key and any consequences
    } else {
        cout << "Misinterpretation of the map leads you into a perilous situation." << endl;
        cout << "You narrowly escape, but your health suffers due to unexpected challenges.You health drops to " << health(playerHealth)<<"Also "<<respect2(playerRespect);
        // challenge 5
    }
    challenge5();
}

void challenge5() {
    counter=4;
    challengeintro(); 
    char choice;
    cout << "Challenge: The Cursed Statues" << endl;
    cout << "As you enter a chamber within the hidden temple, you encounter ancient statues that seem to be cursed. They come to life when you make a sound.Rest there is little light and some items on walls." << endl;
    cout << "How would you like to approach this challenge?" << endl;
    cout << "1: Move silently and avoid making any noise" << endl;
    cout << "2: Use an item from  wall to distract the statues" << endl;
    cout << "3: Confront the statues directly and attempt to outsmart them" << endl;
    cin >> choice;

    switch (choice) {
        case '1':
            silentSteps();
            break;
        case '2':
            distractWithItem();
            break;
        case '3':
            confrontStatues();     
            break;
        default:
            cout << "Invalid choice. Let us refresh the whole challenge for you" << endl;
            this_thread::sleep_for(chrono::seconds(1));cout<<"Refreshing..";system("clear");system("CLS");
             challenge5();     
            break;
    }
}
void silentSteps() {
    cout << "You try to move silently through the chamber, avoiding any noise." << endl;
    int outcome = rand() % 2;  // Randomly choose between success (1) and failure (0)

    if (outcome == 1) {
        cout << "Success! You navigate through the chamber without triggering the statues' curse." << endl;
        cout << "Your silent steps impress the ancient guardians, gaining you respect." << endl;respect(playerRespect);doorPuzzle();
        // Implement any other consequences or rewards
    } else {
        cout << "Oh no! Your attempt to move silently is not successful, and the statues come to life." << endl;
        cout << "You must now confront the animated statues directly, compromising your health to ";health(playerHealth);
        cout<<"Also ";respect2(playerRespect);confrontStatues();
        // Implement any consequences or health loss
    }
}
void confrontStatues() {
    cout << "You choose to confront the statues directly, attempting to outsmart them." << endl;
    // Implement logic for success or failure based on a quick puzzle
    cout << "You notice that each statue has a different symbol on its base." << endl;
    cout << "Your task is to arrange the symbols in the correct order." << endl;
    cout << "Choose one of the following sequences:" << endl;
    cout << "1: 123" << endl;
    cout << "2: 312" << endl;
    cout << "3: 231" << endl;
    cout << "4: 321" << endl;

    char correctSequence = '3';
    char playerSequence;
    int attempts = 0;

    do {
        cout << "Enter the sequence number: ";
        cin >> playerSequence;

        if (playerSequence == correctSequence) {
            cout << "Congratulations! You arranged the symbols correctly, and the statues return to their dormant state." << endl;
            cout << "Your successful outsmarting earns you respect.As " ;respect(playerRespect);doorPuzzle();
            // Implement any other consequences or rewards
            return;
        } else {
            cout << "Incorrect sequence. The statues stir ." << endl;
            attempts++;
        }
    } while (attempts < 2);
    cout << "Oh no! Your attempts to outsmart the statues fail." << endl;
    cout << "The curse cause your health to fall to ";playerHealth=10;health(playerHealth);
}
void distractWithItem() {
    cout << "You decide to use an item from wall to distract the statues." << endl;
        cout << "Choose an item to use for distraction:" << endl;
        cout << "1: Shiny Gem" << endl;
        cout << "2: Noisy Crystals" << endl;
        char itemChoice;
        cin >> itemChoice;
        int outcome = rand() % 2;  // Randomly choose between success (1) and failure (0)
        if (itemChoice == '1' && outcome == 1) {
            cout << "Success! The shiny gem distracts the statues, and you slip by unnoticed." << endl;
            cout << "Your clever use of the distraction item earns you respect.As" ;respect(playerRespect);doorPuzzle();
            
        } else if (itemChoice == '2' && outcome == 1) {
            cout << "Success! The noisy crystals create enough commotion to divert the statues' attention." << endl;
            cout << "You successfully navigate through the chamber without triggering the statues' curse." << endl;
            doorPuzzle();
            
        } else {
            cout << "Oops! The distraction attempt fails, and the statues come to life.Its curse causes your health to drop to ";health(playerHealth);cout<<"Also ";respect2(playerRespect);
            cout << "You must now confront them directly." << endl;
            confrontStatues();
        }
    }
void doorPuzzle() {
    cout << "As you move past the statues, you reach the end of the tunnel, but a mysterious door blocks your way." << endl;
    cout << "Upon closer inspection, you find four ancient spells engraved on the wall. The door seems to respond to the correct sequence of spells." << endl;
    cout << "You decide to try using the spells to open the door." << endl;

    vector<int> correctPattern = {1, 2, 3};

    // Shuffle the correct pattern to make it random
    srand(time(0));
    random_shuffle(begin(correctPattern), end(correctPattern));

    int attempts = 0;
    int wall=0;
    while (attempts < 3) {
        
        cout << "Choose a spell to use (1-3): ";
        char chosenSpell;
        cin >> chosenSpell;
        int spellint = chosenSpell - '0';  // Convert char to int

        if (spellint < 1 || spellint > 3) {
         cout << "Invalid choice. Their is no such spell" << endl;
        } else{
            if (spellint == correctPattern[attempts]) {
                cout << "Great! The spell at position "<<attempts+1<<" is successfully guessed." << endl;
                attempts++;
                if(attempts==3){cout<<"Success door unlocks"<<endl;challenge6(); break;
                // Implement logic for the door opening successfully
                
            }} else {if(wall==0){
                cout << "Incorrect! First wrong attempt and a mystical wall forms against you." << endl;wall++;}else{
                cout << "Wrong guess causes you a health loss and your health drops to ";health(playerHealth);}
                // Implement logic for health loss and consequences
            }
        }
    }
}
void challenge6() {
    counter=5;
    challengeintro(); 
    char option;
    cout << "As you wander through the forest, you spot an old man sitting under a large tree." << endl;
    cout << "Approaching him, you ask for help as the map you possess is not clear." << endl;
    cout << "The old man looks at you and says, 'I will help you, but first, you must solve a riddle.'" << endl;
    cout << "1) Solve the riddle" << endl;
    cout << "2) Go ahead without solving" << endl;
    cin >> option;

    if (option == '1') {
        solveRiddle2();  // Move to riddle-solving
    } else if(option=='2') {
        wanderWithoutOldMan();  // Move to wandering without the old man
    }else{cout<<"Invalid input. Let us refresh it for you."<<endl;
         this_thread::sleep_for(chrono::seconds(1));cout<<"Redfreshing..";system("clear");system("CLS");
         challenge6();}
}
void solveRiddle2() {
    // New riddle with options
    cout << "The old man presents you with a riddle:" << endl;
    cout << "I have keys but open no locks. I have space but no room. You can enter, but you can't go inside. What am I?" << endl;

    cout << "Options:" << endl;
    cout << "1) A keyboard\n2) A door\n3) A book\n4) A computer" << endl;
  
    char option;
    int correct,choice,attempts = 0;

    correct=rand()%4 +1;
    while (playerHealth>0) {
        cout << "Choose the correct option (1, 2, 3, or 4): ";
        cin >> option;
        choice=option-'0';

        if (choice == correct) {
            cout << "Correct! The old man smiles and decides to share a tale of lost glory." << endl;
            shareGloryStory();  // Move to the glory story
            return;  // Exit the function on correct answer
        } else if (attempts==0) {
            cout << "Incorrect! The old man chuckles and grabs you with his magical stick.You health drops to " ;
             health(playerHealth); // Health loss for incorrect answer 
        }else{
            cout << "Incorrect! The old man keeps grabbing you with his magical stick.You health drops to " ;
             health(playerHealth); // Health loss for incorrect answer 
        }
        attempts++;
    }

}

void shareGloryStory() {
    this_thread::sleep_for(chrono::seconds(1));
    cout << "The old man begins his story: 'Long ago, this forest was a haven for warriors seeking glory." << endl;
    cout << "An invasion changed everything, and the warriors lost their way. The key to reclaiming glory lies in a magical sword." << endl;
    cout << "To find it, you must enter the treasure chamber in the heart of the forest.'" << endl;
       challenge7();
}


void wanderWithoutOldMan() {
    cout << "You decide to venture deeper into the forest without the old man's guidance." << endl;
    cout << "After some time, you find yourself at a crossroads. Which path will you take?" << endl;
    cout << "1) Left path\n2) Right path" << endl;

    char pathChoice;
    cin >> pathChoice;

    switch (pathChoice) {
        case '1':
            mysteriousVoice();  // Move to the mysterious voice scenario
            break;
        case '2':
            blockedPath();  // Move to the blocked path scenario
            break;
        default:
            cout << "Invalid choice. You stand undecided in the forest.Let us rewind for you" << endl;
            this_thread::sleep_for(chrono::seconds(1));cout<<"Redfreshing..";system("clear");system("CLS");
            wanderWithoutOldMan();
    }
}

void mysteriousVoice() {
    cout << "As you proceed down the left path, you hear a mysterious voice whispering in the wind." << endl;
    cout << "The voice seems to guide you back to where you came from. Will you follow the voice?" << endl;
    cout << "1) Follow the voice\n2) Ignore the voice" << endl;

    char voiceChoice;
    cin >> voiceChoice;

    if (voiceChoice == '1') {
        returnToOldMan();  // Move to the return to old man scenario
    } else if(voiceChoice=='2') {
        cout << "Ignoring the voice, you continue on your path, uncertain of what lies ahead." << endl;blockedPath();
        
    }else{cout<<"Invalid choice.Seems you are lost so let us refresh it for you";
    this_thread::sleep_for(chrono::seconds(1));cout<<"Redfreshing..";system("clear");system("CLS");
    mysteriousVoice();}
}
void blockedPath() {
    cout << "The  path seems blocked by thick vegetation and fallen trees." << endl;
    cout << "You realize you can't proceed without clearing the path. So you decide to go back to old man." << endl;
    solveRiddle2();
}
void returnToOldMan() {
    cout << "The mysterious voice leads you back to the old man under the tree." << endl;
    cout << "It appears there was more to his magic than you thought." << endl;
    solveRiddle2();  // Return to the old man's challenge
}
void mysteriousApparitionChallenge() {
    cout << "As you approach the mystical well, a colorful parrot perched nearby catches your attention." << endl;
   wellriddle();
}
void challenge7() {
    counter=6;
    challengeintro(); 
    cout << "As you approach the mystical well, a colorful parrot perched nearby catches your attention." << endl;
   wellriddle();
}


void wellriddle(){
    int attempt=0;
    cout << "The parrot squawks, 'Greetings, traveler! If you seek the well's blessing, you must first solve my riddle.'" << endl;
    cout << "Here is your challenge:" << endl;
    cout << "I fly without wings. I cry without eyes. Wherever I go, darkness follows. What am I?" << endl;

    cout<<"You also have only two tries:"<<endl;
    cout << "Options:" << endl;
    cout << "1) Moon\n2) Wind\n3) Shadow\n4) Firefly" << endl;
   for(int i=0;i<2;i++){
    char option;
    cin >> option;
     if (option == '3') {
        parrotOptions();
    } else  {
        cout << "The parrot squawks disapprovingly. 'Incorrect! You must think more carefully, traveler.'" << endl;
        attempt++;
    }

}         cout<<"You could not solved the riddle so you just need to move forwanrd without any water.Also ";respect(playerRespect);challenge8();
}
void parrotOptions(){
    cout << "The parrot flaps its wings joyfully. 'Correct! You have a sharp mind, traveler.'" << endl;
        cout << "Now, you can:" << endl;
        cout << "1) Drink from the well and gain its healing powers." << endl;
        cout << "2) Ask the parrot for advice about the upcoming challenges." << endl;
        cout << "3) Can do both." << endl;
        cout << "4) Politely thank the parrot and continue your journey." << endl;

        char choice;
        cin >> choice;

        if (choice == '1') {
            cout << "You lean over the well and take a sip of its enchanted water. A surge of energy courses through your veins, and you feel invigorated.Your health increases to ";playerHealth=110;health(playerHealth);cout<<"Also ";
            respect(playerRespect);challenge8();
            
        } else if (choice == '2') {
            cout << "The parrot imparts its wisdom: 'Beware of the silent witch on the upcoming path. Listen keenly, and you shall prevail.Don't turn back to any voice'" << endl;cout<<"now after gaining this wisdom ";respect(playerRespect);
            challenge8();
        } else if (choice == '3') {
            cout << "You lean over the well and take a sip of its enchanted water. A surge of energy courses through your veins, and you feel invigorated and your hrslth increases to ";playerHealth=110;health(playerHealth);
            cout << "After this the parrot imparts its wisdom: 'Beware of the silent witch on the upcoming path. Listen keenly, and you shall prevail. Don't turn back to any voice'.Listening to advice ";playerRespect+=30;respect(playerRespect);
            challenge8();
        } else if (choice=='4') {
            cout << "You nod appreciatively at the parrot and continue your journey with newfound knowledge." << endl;challenge8();
            
        }else{
            cout<<"Wrong choice. Let us refresh it for you."<<endl;
            this_thread::sleep_for(chrono::seconds(1));cout<<"Redfreshing..";system("clear");system("CLS");
            parrotOptions();
        }        
}
void challenge8() {
    counter=7;
    challengeintro(); 
    cout << "As you continue your journey, the dense forest becomes increasingly mysterious. Strange whispers fill the air, and you hear faint voices calling your name." << endl;

    cout << "What will you do?" << endl;
    cout << "1) Turn back and investigate the voices." << endl;
    cout << "2) Ignore the voices and press forward into the thick forest." << endl;

    char choice;
    cin >> choice;

    if (choice == '1') {
        cout << "Curiosity gets the better of you, and you decide to turn back to investigate the voices." << endl;
        cout << "As you retreat, the voices grow louder and more sinister. Suddenly, the silent witch appears and attacks you mercilessly." << endl;
        playerHealth = 10; // Player is killed
        health(playerHealth);
    } else if (choice == '2') {
        cout << "You steel yourself against the eerie voices and press forward into the heart of the dense forest." << endl;

        // Introduce challenges in the thick forest
        cout << "Inside the forest, ancient trees stand tall,Though there is enough space between them for you to walk but still somethings block you." << endl;

        cout << "Upon consulting map it seems to be a magical barrier blocking your path and instructions on map reveals three spells that should be spelled in correct order to go through magical barrier" << endl;
         cout << "Options:" << endl;
         cout << "1) A \n2)B\n3)C\nSay them in correct order"<< endl;
  
    char option;
    int correct,choice,attempts = 0;

    // correct=rand()%2;
    correct=2;
    while (attempts < 2) {
        cout << "Choose the correct option (1, 2, or 3): ";
        cin >> option;
        choice=option-'0';

        if (choice == correct) {
            cout << "Correct! You feel cool breeze and when try to go ahead you can." << endl;respect(playerRespect);challenge9();
            
        } else {if (attempts==0) {
            cout << "Incorrect! You feel some weakness in yourself as your health drops due to magic of the invisible shield." << endl;
            health(playerHealth);attempts++; // Health loss for incorrect answer attempts++;z
        }else{
            cout << "Incorrect again! You feel some dizziness as your health falls to "; playerHealth=0;health(playerHealth);
        }
        
    }}
    } else {
        cout << "Invalid choice.Lets refresh it for you." << endl;
        this_thread::sleep_for(chrono::seconds(1));cout<<"Redfreshing..";system("clear");system("CLS");
        challenge8();
       
    }
}
void challenge9() {
    playerHealth=100;
    counter=8;
    challengeintro();   
    srand(static_cast<unsigned>(time(0)));  // Seed for randomization

    displayIntroduction();
    challengeEnchantedDoor();
    challengeWhisperingWalls();
    challengeChamberOfIllusions();
    displaySuccess();
}

void displayIntroduction() {
    cout << "Welcome to the Mysterious Ruined Castle!\n";
    cout << "You stand before the foreboding walls of a mysterious ruined castle.\n";
    cout << "The air is thick with an eerie silence. There is only one visible entrance, an enchanted door.\n\n";
}

void challengeEnchantedDoor() {
    cout << "You approach the enchanted door...\n";
    cout << "Before you is a door adorned with cryptic symbols. The symbols seem to shift each time you look at them.\n";
    
    // Implement logic for the enchanted door challenge
    string correctCombination = "ADBC";
    string userCombination;

    do {
        cout << "Enter the correct combination in capitals.(e.g., ABCD): ";
        getline(cin,userCombination);

        if (userCombination != correctCombination) {
           cout << "The symbols rearrange themselves.Try again.You also loose some health as it drops to ";playerHealth-=10;health(playerHealth);
        
        int comb=rand()%2;
        switch(comb){
            case(0):correctCombination = "ACBD";
            case(1):correctCombination = "BACD";
            case(2):correctCombination = "ABDC";
        }}
    } while (userCombination != correctCombination);
    cout << "The door unlocks with a magical click. You may proceed.\n\n";
}

void challengeWhisperingWalls() {
    cout << "You enter a dimly lit corridor with whispering walls...\n";
    cout << "The walls seem to whisper secrets and warnings. Pay attention to their cryptic clues.\n";
    // Implement logic for the whispering walls challenge
    int correctPath = rand() % 3 + 1; // Randomly choose the correct path (1, 2, or 3)
    int userPath;

    do {
        cout << "Choose a path (1, 2, or 3): ";
        cin >> userPath;

        if (userPath != correctPath) {
            cout << "The walls mislead you.You turn back and come to choose another path Your respect decreases.\n";playerRespect-=10;
        }

    } while (userPath != correctPath);

    cout << "The walls fall silent as you find the correct path. You continue to the next challenge.\n\n";
}

void challengeChamberOfIllusions() {
    cout << "You enter a grand chamber filled with illusions...\n";
    cout << "Mirrors and magical projections create false images and pathways.\n";

    // Implement logic for the chamber of illusions challenge
    int correctMirror = rand() % 5 + 1; // Randomly choose the correct mirror (1 to 5)
    int userMirror;

    do {
        cout << "Choose a mirror (1 to 5): ";
        cin >> userMirror;

        if (userMirror != correctMirror) {
            cout << "The illusion distorts your perception.Something attacks you as your health falls to ";health(playerHealth);cout<<" Choose another mirror.\n";
        }

    } while (userMirror != correctMirror);

    cout << "You see through the illusion and find the real path. The way forward is clear.\n\n";
}

void displaySuccess() {
    cout << "Congratulations! You have successfully navigated and unveiled the secrets of the castle.\n";
    cout << "The path ahead now leads you to the door with welcome message 'Enemies of heir Beware'. it is the treasure chamber.\n";
    challenge10();
    
}

void challenge10() {
    counter=9;
    challengeintro(); 
    riddleScenario();

}
void riddleScenario() {
    cout << "The guardian presents you with a riddle:\n";
    cout << "'I have cities, but no houses. I have mountains, but no trees. I have water, but no fish. What am I?'\n";
    string userAnswer;
    while(true){
    cout << "Your answer: ";
    cin.ignore(); // Ignore any newline characters in the buffer
    getline(cin, userAnswer);

    if (userAnswer == "a map" || userAnswer == "map") {
        cout << "Correct! The barrier dissipates, and you can enter the treasure chamber.\n";respect(playerRespect);
        puzzleScenario();
    } else {
        cout << "Incorrect! The guardian chuckles, and the barrier remains.Meanwhile magic drops your health to ";health(playerHealth);cout<<"Try again.";
         
    }}
}

void puzzleScenario() {
    cout << "You are presented with a 9-word matrix. Two words are missing. Guess the missing words to proceed:\n";

    // Generate a 9-word matrix with two blanks
    string wordMatrix[] = {"1  ", "  3  ", "  5  ","   ","  6  ", " 10  ", "4  ", "     ", " 15  "};

    // Display the initial word matrix
    displayWordMatrix(wordMatrix);

    // Ask the player to guess the missing words
    if (guessWords(wordMatrix)) {
        cout << "Congratulations! The Now it is the final battle that you had to fight with the beast.\n";battleScenario();
    } else {
        cout << "You failed it as the magic depletes your health to ";playerHealth=10;health(playerHealth);
       
    }
}

void displayWordMatrix(const string words[]) {
    cout << "Word Matrix:\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            int index = i * 3 + j;
            cout << words[index] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

bool guessWords(string words[]) {
    string guess1, guess2;
    int count=0,point=0;
    cout << "Enter your guess for the first missing word (__1__): ";
   while(count<2){
    getline(cin,guess1);

    // Check the first guess
    if (guess1 == "2") {
        cout << "Correct!\n"; point++;break;
    } else {
        cout << "Incorrect guess for the first word.\n"; 
    }}

    cout << "Enter your guess for the second missing word (__2__): ";
    while(count<2){
    getline(cin,guess2);
    // Check the first guess
    if (guess2 == "9") {
        cout << "Correct!\n"; point++;break;
    } else {
        cout << "Incorrect guess for the second word.\n"; 
    }}

    if(point>=2){
    return true;}else{
        cout<<"you could not make it in two tries. "<<endl;
        return false;
    }
}

void battleScenario() 
{
char choice1,choice2,choice3;
    cout<<"Now you are finally into your last battle where you have to defeat this beast."<<endl;
    
            cout<<"Your fighting movements are \n1)Kick\n2)Punch\n3)Duck"<<endl;
            cout<<"Let the game begin"<<endl;
            while(treasurebeast>0){
                cout<<endl<<"your move:";
            cin>>choice2;
            switch(choice2){
            case('1'): userinput1();break;
            case('2'): userinput2();break;
            case('3'): userinput3();break;
            default:cout<<"invalid command. ";break;  }     
    }
}
void userinput2(){
    char comp;
    srand(time(0));
    cout<<"You Try to punch."<<endl;
           comp = rand() %3 +1;
           switch(comp){
            case(1):cout<<"Beast Kicked and hit you hard as your health falls. "<<endl;break;
            case(2):cout<<"Beast Punched and neutralizes you blow as takes less damage."<<endl;treasurebeast-=10;break;
            case(3):cout<<"Beast ducked and escaped."<<endl;;break;
            default:cout<<""<<endl;break;
           }
          playerHealth+=10;cout<<"Now your health is  "; health(playerHealth);beastHealth(treasurebeast);
           
}
void userinput1(){
    char comp;
    srand(time(0));
    cout<<"You Try to kick."<<endl;
           comp = rand() %3 +1;
           switch(comp){
            case(1):cout<<"Beast Kicked and a neutralizes your blow as it takes less damage. ";treasurebeast-=10;break;
            case(2):cout<<"Beast Punched and you hit him hard as beast health falls."<<endl;treasurebeast-=20;break;
            case(3):cout<<"Beast ducked and escaped."<<endl;;break;
            default:cout<<"system error"<<endl;break;
           }
          playerHealth+=10; cout<<"Now your health is ";health(playerHealth);beastHealth(treasurebeast);
           
}
void userinput3(){
    char comp;
    srand(time(0));
    cout<<"You ducked."<<endl;
           comp = rand() %3 +1;
           switch(comp){
            case(1):cout<<"Beast Kicked and a blow to you as your health drops to ";playerHealth-=5;break;
            case(2):cout<<"Beast Punched and you escaped it."<<endl;;break;
            case(3):cout<<"Beast also ducked. "<<endl;;break;
            default:cout<<"system error"<<endl;break;
           }
           playerHealth+=10;cout<<"Now your health is ";health(playerHealth);beastHealth(treasurebeast);
           
}
void beastHealth(int treasurebeast){
    if(treasurebeast>0){
        cout<<endl<<"The treasure beast health is "<<treasurebeast<<"."<<endl;}
        else{
            cout<<"You win as the beast health falls to 0.";finalglory();
        }
}
void finalglory(){
    cout<<"After defeating the Beast you finally enter the treasure room."<<endl;
    cout<<"Shine of the jewels and diamonds sparkle in your eye."<<endl;
    cout<<"Congratulations!!! you have done all this and the game is over."<<endl;
    cout<<"Game Over"<<endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout<<"Game producers: Huzaifa Hanif."<<endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout<<"Game producers: Muhammad Suleman Faisal."<<endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout<<"Designing: Muhammad Suleman Faisal."<<endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout<<"Story line: Huzaifa Hanif."<<endl;
    this_thread::sleep_for(chrono::seconds(1));
    system("pause");
    intro();
}
void challengeintro(){
    counter++;
    cout<<"Press any key to continue......."<<endl;
    getchar();
    getchar();
    system("clear");system("CLS");
      cout<<"--------------------------------------------------------------Challenge:"<<counter<<"--------------------------------------------------------------"<<endl;
      this_thread::sleep_for(chrono::seconds(1));
      cout<<"Your health at the start of this challenge is "<<playerHealth<<"."<<endl;
      this_thread::sleep_for(chrono::seconds(1));
      cout<<"Your respect at the start of this challenge is "<<playerRespect<<"."<<endl;
      
      cout<<"Press any key to proceed to challenge......."<<endl;
    getchar();
    
}



