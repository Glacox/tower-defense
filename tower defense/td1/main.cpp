//#include <SFML/Graphics.hpp>
//#include "gameObject.h"
#include <windows.h>
#include <iostream>
#include <vector>


int main(int argc, char** argv)
{
    //hide console

    HWND hWnd = GetConsoleWindow();
    ShowWindow(hWnd, SW_NORMAL); //SW_HIDE for hinding, SW_NORMAL for showing


    //Création de la fenêtre
    int width = 1280;
    int height = 720;

    //sf::RenderWindow oWindow(sf::VideoMode(width, height), "Tower Defense");

    //Variables


    //DeltaTime
    //sf::Clock oClock;
    float fDeltaTime;


    //GameLoop
    /*while (oWindow.isOpen())
    {

        fDeltaTime = oClock.restart().asSeconds();

        //Events


        //Draw
        oWindow.clear();


        oWindow.display();


    }*/
    return 0;
}

