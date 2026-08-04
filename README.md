# 🐍 Snake and Ladder Game

![C++](https://img.shields.io/badge/Language-C%2B%2B-blue?style=for-the-badge&logo=c%2B%2B)
![Status](https://img.shields.io/badge/Status-Completed-brightgreen?style=for-the-badge)

A two-player Snake and Ladder game built in C++. Players take turns entering dice values, climb ladders, avoid snakes, and race to reach exactly 100.

## ✨ Features

- 🎮 Two-player turn-based gameplay
- 🎲 Manual dice input (1–6) with validation
- 🪜 4 ladders and 8 snakes
- 🔄 Special rule for consecutive sixes
- 🚫 Overshoot protection (must land exactly on 100)
- 🏆 First player to reach 100 wins

## 📜 Rules

| Rule | Detail |
|------|--------|
| Start | Both players begin at position 0 |
| Win | Reach exactly 100 |
| Overshoot | Stay at the current position |
| Ladders | 8→26, 21→82, 43→77, 50→91 |
| Snakes | 44→22, 62→18, 95→51, 98→13 |
| Consecutive Sixes | Every odd consecutive six (3rd, 5th, 7th...) is discarded |

## 🚀 How to Run

```bash
g++ "snake and ladder.cpp" -o snake_ladder
./snake_ladder
```

> **Windows:** Run `snake_ladder.exe` after compiling.

## 🎮 How to Play

- Launch the game.
- Players take turns entering a dice value (1–6).
- Climb ladders and avoid snakes.
- Reach exactly **100** to win.

## 💡 Future Improvements

- 🎲 Random dice rolls
- 🖥️ Graphical (GUI) version
- 🤖 AI opponent
- 💾 Save and load game progress

- LinkedIn: www.linkedin.com/in/ameera-iqbal-31b179419
