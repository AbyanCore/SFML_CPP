#include <SFML/Graphics.hpp>
#include <iostream>

int main(){

    sf::RenderWindow window( sf::VideoMode(600,600),"Window Event");

    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            switch (event.type){
                case sf::Event::Closed:
                    window.close();
                    break;
                case sf::Event::Resized:
                    std::cout << window.getSize().x << " | " << window.getSize().y << std::endl;
                    break;
                case sf::Event::LostFocus:
                    std::cout << "Lost Focus the window" << std::endl;
                    break;
                case sf::Event::GainedFocus:
                    std::cout << "gained Focus the window" << std::endl;
                    break;
            }            
        }
        
        window.clear();

        window.display();
    }
    
}