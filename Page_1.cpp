

#include <iostream>

using namespace std;

int main()
{
 string intro = "                              Welcome to Dugeon Crawler\n\n"   
"                                                 ,--,  ,.-.  \n"
"               ,                    |,       '-,-`,'-.' | ._ \n"
"              /|         \\    ,   |\\         }  )/  / `-,',\n"
"             [ ,          |\\ /|   | |        /   |  |/`  ,` \n"
"             | |       ,.`  `,` `, | |  _,...(   (      .',  \n" 
"            \\  \\ __ ,-` `  ,  , `/ |,'      Y     (   /_L\\\n"
"             \\  \\ ,``,   ` , ,  /  |         )         _,/ \n"
"              \\  '  `  ,_ _`_,-,<._.<        /         /    \n"
"                ', `>.,`  `  `   ,., |_      |         /     \n"
"                 \\/`  `,   `    ,`  | /__,.-`    _,  `\\     \n"
"              -,-..\\  _ \\  `  /  ,   / `._) _,-\\      \\   \n"
"              \\_,,.)  /\\   ` /  / )  (-,, ``    ,        |   \n"
"              ,` )  | \\_\\       \\/  |  `(              \\  \n"
"              / /```(   ,         \\   | `<`    ,           |  \n" 
"             / /_,--`\\   <   V  > ,` ) <_/) |\\      _____)  \n"
"      ,-,  ,`  `   (_,\\      |   /) / __/  /   `----`        \n"
"     (-, \\          ) \\ ('_.-._)/ /,`    /                  \n"
"      |/  `           `/ \\ V   V, /`     /                   \n"
"  ,--(        ,      <_/`\\       ||      /                    \n"
" (   ,``-    \\/|         \\-A.A-`|     /                     \n"
",>,_ )_,..(    )\\         -,,_-`  _--`                      \n"
"(_\\|`   _,/_  /  \\            ,--`                         \n"
"\\( `   <.,../`    `-.._   _,-`                              \n";

   
 string background = "\n";
  
 string Menu_Drop = "1. Start New Game \n" 
 "2. Achievements \n"  
 "3. Quit \n"
  "Enter your choice? "  ;
 
  int choice;
  
  cout<<intro<<"\n"<<background<<"\n"<<Menu_Drop;
  cin>>choice;
  
 while(choice!=3)
 {
    cout<<"Invalid! Choose again";
    cin>>choice;
    if(choice==1)
         // call the game file
     else
          //call the achievement file
 }
  
 cout<<"Thanks for playing";
}
