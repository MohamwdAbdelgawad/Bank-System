# Bank System (C++/CLI Windows Forms)

Simple desktop banking application implemented with C++/CLI and Windows Forms. Provides basic admin functionality: add user, list users, find user, deposit, withdraw and transfer.

## Key points
- UI: Windows Forms (`AdminForm`, `LoginForm`) written in C++/CLI.
- Core logic: native C++ classes (`Bank`, `User`, `Transaction`) drive runtime data.
- Language/Platform: C++ (C++14) with C++/CLI; built in __Visual Studio 2022__.
- No external libraries required (uses .NET/WinForms and standard C++).

## Project structure (important files)
- `Bank.h` / `Bank.cpp` — core banking logic
- `User.h` — user model
- `Transaction.h` — transaction types
- `AdminForm.h` / `AdminForm.cpp` — admin UI
- `LoginForm.h` / `LoginForm.cpp` — login UI
- Visual Studio solution & project files (`.vcxproj`)

## Build & run
1. Open the solution in __Visual Studio 2022__.
2. Ensure C++/CLI support is installed.
3. Select configuration (Debug/Release) and platform.
4. Build via __Build > Build Solution__.
5. Run with __F5__ (or __Debug > Start Debugging__).

## Usage
- Launch app, authenticate via the login form.
- Use the admin (username = admin, password = 123) UI to add users, view all users, search by ID, deposit, withdraw, and transfer between accounts.

