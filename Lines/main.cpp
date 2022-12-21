#include <SFML/Graphics.hpp>
#include <iostream>

int main(){
    sf::RenderWindow window(sf::VideoMode(800,800),"Lines");

    sf::RectangleShape line;
    line.setSize(sf::Vector2f(200,3));
    line.setPosition(300,300);

    sf::Vertex Lines2[] = {
        sf::Vertex(sf::Vector2f(200,100)),
        sf::Vertex(sf::Vector2f(100,200)),
        sf::Vertex(sf::Vector2f(300,300)),
        sf::Vertex(sf::Vector2f(200,100)),
    };


    while(window.isOpen()){

        sf::Event event;
        while(window.pollEvent( event )){
            switch(event.type){
                case sf::Event::Closed:
                    window.close();
                    break;
            }
        }
        window.clear();

        window.draw(Lines2,4,sf::LinesStrip);
        window.draw(line);

        window.display();
    }

}