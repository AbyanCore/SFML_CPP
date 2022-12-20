#include <SFML/Graphics.hpp>
#include <iostream>

int main(){
    sf::RenderWindow window( sf::VideoMode(600,600),"Adding Shape");

    // Createing Shape
    sf::RectangleShape recta1(sf::Vector2f(100,50));
    sf::CircleShape cirl2(150);
    sf::CircleShape polygon(50,3);

    // Set Color Shape
    recta1.setFillColor(sf::Color::Blue);
    cirl2.setFillColor(sf::Color::Red);

    // Set pos
    cirl2.move(sf::Vector2f(50.4,60.3));
    polygon.move(sf::Vector2f(150.4,160.3));

    // setpoint circle
    cirl2.setPointCount(5);

    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
                window.close();
                break;
            }
        }

        // Update

        window.clear();

        window.draw(recta1);
        window.draw(cirl2);
        window.draw(polygon);

        window.display();
        
    }
    
}