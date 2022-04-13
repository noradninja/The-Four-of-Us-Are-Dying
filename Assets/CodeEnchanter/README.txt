Code Enchanter is a tool for Unity Editor which aims to improve your application's performance and memory usage. It automatically implements tips and guides from makers of Unity and game development professionals from all around the world. It searches all of C# script files to find a room for improvement and makes minor changes to your code while preserving your code style and comments to make the code more CPU and memory friendly. Code Enchanter takes on a lot of mundane and non-creative work so you can focus on what's important. It is strongly recommended for non-programmers, mobile & VR developers and novice users.


Contact:
merryyellow@outlook.com


Website:
https://codeenchanter.netlify.com


Restrictions:
* Unity 2018.3 or higher. Legacy version supports older versions of Unity. Please visit website to download the legacy version of Code Enchanter.


Before Using (Windows):
* Make sure your code/project compiles successfully. There shouldn't be any compile errors (But there could be warnings, they are fine).
* Backup your script files or whole project. Code Enchanter is going to make minor changes to your script files and these changes are not revertible. Committing to repository or copying files is highly recommended before using Code Enchanter.


Before Using (macOS)
* Make sure your code/project compiles successfully. There shouldn't be any compile errors (But there could be warnings, they are fine).
* Backup your script files or whole project. Code Enchanter is going to make minor changes to your script files and these changes are not revertible. Committing to repository or copying files is highly recommended before using Code Enchanter.


Before Using (Linux)
* Make sure your code/project compiles successfully. There shouldn't be any compile errors (But there could be warnings, they are fine).
* Backup your script files or whole project. Code Enchanter is going to make minor changes to your script files and these changes are not revertible. Committing to repository or copying files is highly recommended before using Code Enchanter.


How to Use:
* Copy folder under "Assets"
* Choose "Tools"->"Code Enchanter" from menu
* Click "Enchant" button
* Click "I Made a Backup. Go Ahead!" button
* Click "Exit" button


How to Use (Detailed):
* Copy "CodeEnchanter" folder (with all subfolders and files) under "Assets" folder (or any subfolder of "Assets" folder) of your project(s).
* In the Unity Editor choose "Tools" menu from the menu bar then choose menu item of "Code Enchanter".
* A new window with title "CodeEnchanter" should open. Wait for a few seconds for initialization.
* Choose "Advanced" if you want to omit some files or enchanters, though it is not recommended.
* Choose "Enchant" to advance.
* Choose "I Made a Backup. Go Ahead!" to begin Enchanter. From now on your source files may change, because of that it is strongly recommended making a backup or committing your changes.
* Code Enchanter will iterate over your source files, progress will be visible on the window.
* "Pause" button will pause the progress, and "Resume" will continue.
* "Exit" button will appear when Code Enchanter finishes, click it to close the window. Results will appear on the window.


Options:
Options can be changed by editing file "EnchanterOptions.txt". Default options should be sufficient for most users, changing options is not recommended.
* IsLoggingToFile {boolean}: Standard file logging.
* LogFileName {string}: File name of default logging, the file is placed under asset directory.
* IsLoggingAll {boolean}: Logs all available data. Useful when an error occurs, default is off.
* IsPreCompiling {boolean}: Checks if code compiles before enchanting the code. Useful for preventing malfunction.
* IsPostCompiling {boolean}: Checks if code compiles after code has been enchanted. Useful when an error occurs while enchanting.


Thank you for using Code Enchanter. We hope this will you in your crazy journey called game development :)