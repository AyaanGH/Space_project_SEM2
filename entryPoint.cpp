#include <SFML/Graphics.hpp>

int main( int argc, char** argv )
{
	sf::RenderWindow appWindow( sf::VideoMode( 800, 600, 32 ), "App" );
	sf::Event appEvent;
	
	while ( appWindow.isOpen() )
	{
		while ( appWindow.pollEvent( appEvent ) )
		{
			if ( appEvent.type == sf::Event::Closed )
				appWindow.close();
		}
		
		appWindow.clear();
		appWindow.display();
	}
	
	return 0;
}













// #include <SFML/Graphics.hpp>



// int main()
// {   

//     sf::RenderWindow appWindow(sf::VideoMode(800,600,32), "app");

//     sf:: Event appEvent;

//     while (appWindow.isOpen())
//     {
//         while (appWindow.pollEvent(appEvent))
//         {

//             if (appEvent.type == sf::Event::Closed)

//             {
//                 appWindow.close();    /* code */
//             }
            

//         }

//         appWindow.clear();
//         appWindow.display();
//     }
    
//     /* code */
//     return 0;
// }
