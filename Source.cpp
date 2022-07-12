#include <SFML/Window.hpp>
#include<SFML/Audio.hpp>
#include<SFML/Graphics.hpp>
#include<iostream>

int main() {

    sf::RenderWindow renderwindow(sf::VideoMode(1000, 1000), "Sorting Algorithm Visualizer");
    sf::Texture Quick, Merge, Bubble;
    sf::Sprite sprite, fanta, coke ;

    if (!Quick.loadFromFile("Quick Sort.png"))
        std::cout << "Error";

    sprite.setTexture(Quick);
    sprite.setPosition(400, 250);

    if (!Merge.loadFromFile("Merge Sort.png"))
        std::cout << "Error";

    fanta.setTexture(Merge);
    fanta.setPosition(400, 450);

    if (!Bubble.loadFromFile("Bubble Sort.png"))
        std::cout << "Error";

    coke.setTexture(Bubble);
    coke.setPosition(400, 650);

    sf::Font font;
    if (!font.loadFromFile("tnm.ttf"))
        std::cout << "Error";

    sf::Text text;
    text.setFont(font);
    text.setString("Sorting Algorithm Visualizer");
    text.setCharacterSize(40);
    text.setPosition(300, 50);
    text.setFillColor(sf::Color::Blue);
    text.setStyle(sf::Text::Underlined);

 




    while (renderwindow.isOpen())
    {
        sf::Event event;
        while (renderwindow.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                renderwindow.close();

            if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
            {
           
                sf::Vector2f mouse = renderwindow.mapPixelToCoords(sf::Mouse::getPosition(renderwindow));

              
                sf::FloatRect spritearea = sprite.getGlobalBounds();

               
                if (spritearea.contains(mouse))
                {
                    renderwindow.close();
                }
            }
            if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
            {
             
                sf::Vector2f cat = renderwindow.mapPixelToCoords(sf::Mouse::getPosition(renderwindow));

              
                sf::FloatRect fantaarea = fanta.getGlobalBounds();

                if (fantaarea.contains(cat))
                {
                   //wanted function
                }
            }
            if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
            {
            
                sf::Vector2f dog = renderwindow.mapPixelToCoords(sf::Mouse::getPosition(renderwindow));

               
                sf::FloatRect cokearea  = coke.getGlobalBounds();

              
                if (cokearea.contains(dog))
                {
                    //wanted function
                }
            }

          
        }

        renderwindow.clear(sf::Color::White);
        renderwindow.draw(text);
        renderwindow.draw(sprite);
        renderwindow.draw(fanta);
        renderwindow.draw(coke);
        renderwindow.display();

    }


}
