# 🎲 Snake and Ladder Game

> A classic two-player board game with a twist — roll the dice, climb ladders, avoid snakes, and watch out for consecutive sixes!

![C++](https://img.shields.io/badge/Language-C%2B%2B-blue?style=for-the-badge&logo=c%2B%2B)
![Status](https://img.shields.io/badge/Status-Completed-brightgreen?style=for-the-badge)
![Semester](https://img.shields.io/badge/Semester-2nd-orange?style=for-the-badge)

## 📖 About

This is a **two-player Snake and Ladder** game built in C++ as my 2nd semester project. Players manually roll a dice, move on a 1–100 board, and experience the classic ups and downs — literally! Snakes pull you down, ladders boost you up, and consecutive sixes come with a twist.

**👩‍💻 Author:** Ameera Iqbal — BS IT, UMT (2026)


## ✨ Features

- 👥 Two-player turn-based gameplay  
- 🎲 Manual dice input (1–6) with validation  
- 🪜 4 ladders and 🐍 8 snakes  
- ⚡ Special rule: 3+ consecutive sixes get discarded  
- 🛑 Overshoot protection (can't go past 100)  
- 🏆 First to reach exactly 100 wins!


## 🎮 Quick Rules

| Rule | Detail |
|------|--------|
| Start | Both players at position 0 |
| Win | Reach exactly 100 |
| Overshoot | Stay at previous position |
| Ladders | 8→26, 21→82, 43→77, 50→91 |
| Snakes | 44→22, 62→18, 95→51, 98→13 |
| Sixes | Odd consecutive sixes (3,5,7...) are discarded |

## 🚀 How to Run

```bash
# Clone and compile
git clone https://github.com/Ameeralqbal/snake-and-ladder.git
cd snake-and-ladder
g++ "snake and ladder.cpp" -o snake_ladder

# Run
./snake_ladder      # Linux/macOS
snake_ladder.exe    # Windows
```

Or just open the `.cpp` file in **Dev C++**, **CodeBlocks**, or **VS Code** and hit **Run**!

## 🎮 How to Play

1. Launch the game  
2. Player 1 enters a dice value (1–6)  
3. Player 2 does the same — take turns  
4. Watch for snakes, ladders, and sixes!  
5. First to hit 100 wins 🏆

## 📚 What I Learned

- Game logic and state management  
- Input validation and error handling  
- Loop structures (`while`, `do-while`)  
- Conditional logic for special rules  
- Building engaging console interactions

## 🚀 What's Next?

- Random dice roll instead of manual input  
- GUI version with a visual board  
- AI opponent  
- Save/Load game feature  

## 🤝 Contributing

Contributions, issues, and feature requests are welcome!

### How to Contribute

1. **Fork** the repository  
2. **Create** a feature branch:
   ```bash
   git checkout -b feature/your-feature-name
   ```
3. **Commit** your changes:
   ```bash
   git commit -m "Add your feature description"
   ```
4. **Push** to the branch:
   ```bash
   git push origin feature/your-feature-name
   ```
5. **Open** a Pull Request

### Ideas for Contributions
- 🎲 Add random dice roll (replace manual input)
- 🎨 Create a visual board display
- 🤖 Add AI opponent
- 💾 Save/Load game progress
- 📊 Track player statistics
- 🔊 Add sound effects
- 📱 Create mobile version


> ⭐ If you like this project, drop a star on GitHub!

**Enjoy the game! 🎲**
