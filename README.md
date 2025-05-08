# A-Text-Based-Decison-Adventure-Game
## 📜 Description  
A-Text-Based-Decision-Adventure-Game is a simple, console-based C++ game that immerses players in an adventure narrative filled with critical choices, unpredictable events, and a final boss encounter. As the player explores mysterious lands—such as enchanted forests and forgotten isles—they must solve riddles, navigate traps, engage with mythical creatures, and make impactful decisions that affect their health and respect.  

This project was created as a personal exploration into storytelling, game logic, and user interaction using basic C++ programming concepts. It is structured as a series of interconnected challenges, each with multiple decision paths and consequences.  

---

## 🎮 Features  
- **🧭 Multiple Decision-Based Challenges**: Progress through a series of 10 unique challenges.  
- **💀 Health & Respect System**: Player status is affected by decisions, adding tension and replayability.  
- **🧩 Randomized Outcomes**: Some choices include random outcomes to simulate risk and chance.  
- **🐉 Final Boss Encounter**: Battle a treasure beast in the final challenge.  
- **🔁 Recursive Input Handling**: Graceful handling of invalid inputs with a reset mechanism.  
- **🎭 Branching Narratives**: Different paths lead to different encounters and endings.  

---

## 🚀 Getting Started  
### Requirements  
- C++ compiler (e.g., g++, clang++)  
- Terminal or command line interface  

### How to Compile  
```bash  
g++ -o adventure_game main.cpp  
```

### How to Run
```bash
./adventure_game  
```

---

## 🛠 Structure Overview  
The code is modularized into functions that represent different scenes and scenarios such as:  

- **Main Game Segments**:  
  `challenge1()`, `challenge2()` ... `challenge10()`  
- **Sub-scenarios with Decision Points**:  
  `challengeBridge()`, `challengeRiver()`, `exploreClearing()` etc.  
- **Game Flow & User Guidance**:  
  `intro()`, `instructions()`, `startGame()`  
- **Player State Management**:  
  `health()`, `respect()`  

## 🧠 Learning Outcomes  
Through building this project, the following skills were practiced:  

- Procedural programming with C++  
- Game logic and branching narratives  
- Random number generation  
- Input validation and flow control  
- Basic terminal UI and feedback using delays and screen clearing  
