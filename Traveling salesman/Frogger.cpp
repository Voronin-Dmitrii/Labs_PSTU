#include<SFML/Graphics.hpp>
#include<iostream>
using namespace std;
using namespace sf;

struct duo
{
	int main;
	int secret;
	int os_x;
	int os_y;
};

void print_arr(int(&arr)[9][8])
{
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (arr[i][j] < 0)
			{
				cout << "M";
				cout << "\t";
			}
			else
			{
				cout << arr[i][j];
				cout << "\t";
			}

		}
		cout << endl;
	}
	cout << endl;
	cout << "---------------------------------------------------" << endl;
	cout << endl;
}

int min_line(int(&arr)[9][8], int i)
{
	int min = 100;
	for (int j = 0; j < 7; j++)
	{
		if ((arr[i][j] < min) && (arr[i][j] >= 0))
		{
			min = arr[i][j];
		}
	}
	return min;
}

int min_column(int(&arr)[9][8], int j)
{
	int min = 100;
	for (int i = 0; i < 7; i++)
	{
		if ((arr[i][j] < min) && (arr[i][j] >= 0))
		{
			min = arr[i][j];
		}
	}
	return min;
}

int reduction_lines(int(&arr)[9][8])
{
	for (int i = 0; i < 7; i++)
	{
		arr[i][7] = min_line(arr, i);
	}
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			arr[i][j] = arr[i][j] - arr[i][7];
		}
	}
	return arr[9][8];
}

int reduction_columns(int(&arr)[9][8])
{
	for (int i = 0; i < 7; i++)
	{
		arr[7][i] = min_column(arr, i);
	}
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			arr[i][j] = arr[i][j] - arr[7][j];
		}
	}
	return arr[9][8];
}

int suma(int(&arr)[9][8], int a, int b)
{
	int sum;

	int line = a;
	int column = b;
	int min_line = 100;
	int min_column = 100;
	for (int i = 0; i < 7; i++)
	{
		if ((arr[line][i] < min_line) && (i != b) && (arr[line][i] >= 0))
		{
			min_line = arr[line][i];
		}
	}
	for (int i = 0; i < 7; i++)
	{
		if ((arr[i][column] < min_column) && (i != a) && (arr[i][column] >= 0))
		{
			min_column = arr[i][column];
		}
	}
	sum = min_column + min_line;
	return sum;
}

int reduction_arr(int(&arr)[9][8], int(&arr1)[9][8])
{
	int result;
	for (int i = 0; i < 7; i++)
	{
		int a;
		int b;
		int temp1 = 0;
		int temp2 = 0;
		reduction_lines(arr);
		reduction_columns(arr);
		duo mas[8][8];
		int max_secret = 0;
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				mas[i][j].main = arr[i][j];
				mas[i][j].secret = 0;
			}
		}
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (arr[i][j] == 0)
				{
					mas[i][j].secret = suma(arr, i, j);
				}
			}
		}
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (mas[i][j].main == 0)
				{

					if (mas[i][j].secret > max_secret)
					{
						max_secret = mas[i][j].secret;
						temp1 = i;
						temp2 = j;
					}
				}
			}
		}

		for (int i = 0; i < 7; i++)
		{
			arr[temp1][i] = -1;
			arr[i][temp2] = -1;
		}
		arr[temp2][temp1] = -1;
		print_arr(arr);
		for (int i = 0; i < 8; i++)
		{
			arr[7][i] = 0;

		}
		for (int i = 0; i < 8; i++)
		{
			arr[i][7] = 0;
		}
		cout << temp1 + 1 << "-" << temp2 + 1 << endl;
		arr[8][7] += arr1[temp1][temp2];
	}
	cout << "Кротчайший путь: 1-4-3-6-7-5-2-1" << endl;
	return arr[8][7];
}

int main()
{
	setlocale(LC_ALL, "ru");
	int arr[9][8] = { 
		{-1, 14, 14, 12, 18, -1, -1, 0},
		{12, -1, -1, -1, 10, -1, -1, 0},
		{16, -1, -1, 10, -1, 9, -1, 0},
		{10, -1, 9, -1, -1, 19, -1, 0},
		{15, 13, -1, -1, -1, 10, 15, 0},
		{-1, -1, 8, 15, 11, -1, 10, 0},
		{ -1, -1, -1, -1, 12, 14, -1, 0},
		{0, 0, 0, 0, 0, 0, 0, 0},
		{0}
	};
	int arr1[9][8];
	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 8; j++)
			arr1[i][j] = arr[i][j];
	print_arr(arr);
	cout << "Длинна = " << reduction_arr(arr, arr1);
	sf::RenderWindow window(sf::VideoMode(1200, 800), "MainWindow");
	sf::Image image;
	image.loadFromFile("background.jpg");
	image.createMaskFromColor(image.getPixel(0, 0));
	sf::Texture texture;
	texture.loadFromImage(image);
	sf::Sprite sprite;
	sprite.setTexture(texture);
	int a2, b2;
	a2 = 50;
	b2 = 170;
	int a1, b1;
	a1 = 300;
	b1 = 50;
	int a5, b5;
	a5 = 100;
	b5 = 450;
	int a7, b7;
	a7 = 300;
	b7 = 600;
	int a6, b6;
	a6 = 600;
	b6 = 500;
	int a4, b4;
	a4 = 800;
	b4 = 300;
	int a3, b3;
	a3 = 450;
	b3 = 250;
	a1 += 250;
	a2 += 250;
	a3 += 250;
	a4 += 250;
	a5 += 250;
	a6 += 250;
	a7 += 250;
	sf::Font font;
	font.loadFromFile("VelaSans.ttf");
	sf::Text text2("2", font);
	text2.setFillColor(sf::Color::Black);
	text2.setPosition(a2 + 45, b2 + 40);
	text2.setCharacterSize(25);
	CircleShape circle2;
	CircleShape circle1;
	circle2.setRadius(55);
	circle2.setFillColor(Color::Red);
	circle2.setPosition(a2, b2);
	circle2.setOutlineColor(Color::Black);
	circle2.setOutlineThickness(2);
	circle2.setPointCount(150);
	sf::Text text1("1", font);
	text1.setFillColor(sf::Color::Black);
	text1.setPosition(a1 + 45, b1 + 40);
	text1.setCharacterSize(25);
	circle1.setRadius(55);
	circle1.setFillColor(Color::Red);
	circle1.setPosition(a1, b1);
	circle1.setOutlineColor(Color::Black);
	circle1.setOutlineThickness(2);
	circle1.setPointCount(150);
	sf::Text text5("5", font);
	text5.setFillColor(sf::Color::Black);
	text5.setPosition(a5 + 45, b5 + 40);
	text5.setCharacterSize(25);
	CircleShape circle5;
	circle5.setRadius(55);
	circle5.setFillColor(Color::Red);
	circle5.setPosition(a5, b5);
	circle5.setOutlineColor(Color::Black);
	circle5.setOutlineThickness(2);
	circle5.setPointCount(150);
	sf::Text text7("7", font);
	text7.setFillColor(sf::Color::Black);
	text7.setPosition(a7 + 45, b7 + 40);
	text7.setCharacterSize(25);
	CircleShape circle7;
	circle7.setRadius(55);
	circle7.setFillColor(Color::Red);
	circle7.setPosition(a7, b7);
	circle7.setOutlineColor(Color::Black);
	circle7.setOutlineThickness(2);
	circle7.setPointCount(150);
	sf::Text text6("6", font);
	text6.setFillColor(sf::Color::Black);
	text6.setPosition(a6 + 45, b6 + 40);
	text6.setCharacterSize(25);
	CircleShape circle6;
	circle6.setRadius(55);
	circle6.setFillColor(Color::Red);
	circle6.setPosition(a6, b6);
	circle6.setOutlineColor(Color::Black);
	circle6.setOutlineThickness(2);
	circle6.setPointCount(150);
	sf::Text text4("4", font);
	text4.setFillColor(sf::Color::Black);
	text4.setPosition(a4 + 45, b4 + 40);
	text4.setCharacterSize(25);
	CircleShape circle4;
	circle4.setRadius(55);
	circle4.setFillColor(Color::Red);
	circle4.setPosition(a4, b4);
	circle4.setOutlineColor(Color::Black);
	circle4.setOutlineThickness(2);
	circle4.setPointCount(150);
	sf::Text text3("3", font);
	text3.setFillColor(sf::Color::Black);
	text3.setPosition(a3 + 45, b3 + 40);
	text3.setCharacterSize(25);
	CircleShape circle3;
	circle3.setRadius(55);
	circle3.setFillColor(Color::Red);
	circle3.setPosition(a3, b3);
	circle3.setOutlineColor(Color::Black);
	circle3.setOutlineThickness(2);
	circle3.setPointCount(150);
	sf::Text text_result("Shortest path: 1-4-3-6-7-5-2-1", font);
	text_result.setFillColor(sf::Color::Black);
	text_result.setPosition(1, 10);
	text_result.setCharacterSize(35);
	sf::Text text_shortest("Length: 77", font);
	text_shortest.setFillColor(sf::Color::Black);
	text_shortest.setPosition(1, 60);
	text_shortest.setCharacterSize(35);
	sf::VertexArray line1(sf::Lines, 16);
	line1[0].position = sf::Vector2f(a1 + 55, b1 + 60);
	line1[1].position = sf::Vector2f(a2 + 55, b2 + 60);
	line1[0].color = sf::Color::Magenta;
	line1[1].color = sf::Color::Magenta;

	sf::VertexArray line2(sf::Lines, 16);

	line2[0].position = sf::Vector2f(a2 + 55, b2 + 60);
	line2[1].position = sf::Vector2f(a5 + 55, b5 + 60);
	line2[0].color = sf::Color::Magenta;
	line2[1].color = sf::Color::Magenta;

	sf::VertexArray line3(sf::Lines, 16);

	line3[0].position = sf::Vector2f(a5 + 55, b5 + 60);
	line3[1].position = sf::Vector2f(a7 + 55, b7 + 60);
	line3[0].color = sf::Color::Magenta;
	line3[1].color = sf::Color::Magenta;

	sf::VertexArray line4(sf::Lines, 16);

	line4[0].position = sf::Vector2f(a7 + 55, b7 + 60);
	line4[1].position = sf::Vector2f(a6 + 55, b6 + 60);
	line4[0].color = sf::Color::Magenta;
	line4[1].color = sf::Color::Magenta;

	sf::VertexArray line5(sf::Lines, 16);

	line5[0].position = sf::Vector2f(a6 + 55, b6 + 60);
	line5[1].position = sf::Vector2f(a4 + 55, b4 + 60);
	line5[0].color = sf::Color::Black;
	line5[1].color = sf::Color::Black;

	sf::VertexArray line6(sf::Lines, 16);

	line6[0].position = sf::Vector2f(a4 + 55, b4 + 60);
	line6[1].position = sf::Vector2f(a3 + 55, b3 + 60);
	line6[0].color = sf::Color::Magenta;
	line6[1].color = sf::Color::Magenta;

	sf::VertexArray line7(sf::Lines, 16);

	line7[0].position = sf::Vector2f(a3 + 55, b3 + 60);
	line7[1].position = sf::Vector2f(a1 + 55, b1 + 60);
	line7[0].color = sf::Color::Black;
	line7[1].color = sf::Color::Black;

	sf::VertexArray line8(sf::Lines, 16);

	line8[0].position = sf::Vector2f(a1 + 55, b1 + 60);
	line8[1].position = sf::Vector2f(a2 + 55, b2 + 60);
	line8[0].color = sf::Color::Magenta;
	line8[1].color = sf::Color::Magenta;

	sf::VertexArray line9(sf::Lines, 16);

	line9[0].position = sf::Vector2f(a1 + 55, b1 + 60);
	line9[1].position = sf::Vector2f(a5 + 55, b5 + 60);
	line9[0].color = sf::Color::Black;
	line9[1].color = sf::Color::Black;
	sf::VertexArray line10(sf::Lines, 16);

	line10[0].position = sf::Vector2f(a5 + 55, b5 + 60);
	line10[1].position = sf::Vector2f(a6 + 55, b6 + 60);
	line10[0].color = sf::Color::Black;
	line10[1].color = sf::Color::Black;

	sf::VertexArray line11(sf::Lines, 16);

	line11[0].position = sf::Vector2f(a5 + 55, b5 + 60);
	line11[1].position = sf::Vector2f(a6 + 55, b6 + 60);
	line11[0].color = sf::Color::Black;
	line11[1].color = sf::Color::Black;


	sf::VertexArray line12(sf::Lines, 16);

	line12[0].position = sf::Vector2f(a3 + 55, b3 + 60);
	line12[1].position = sf::Vector2f(a6 + 55, b6 + 60);
	line12[0].color = sf::Color::Magenta;
	line12[1].color = sf::Color::Magenta;

	sf::VertexArray line13(sf::Lines, 16);

	line13[0].position = sf::Vector2f(a1 + 55, b1 + 60);
	line13[1].position = sf::Vector2f(a5 + 55, b5 + 60);
	line13[0].color = sf::Color::Black;
	line13[1].color = sf::Color::Black;

	sf::VertexArray line14(sf::Lines, 16);

	line14[0].position = sf::Vector2f(a4 + 55, b4 + 60);
	line14[1].position = sf::Vector2f(a1 + 55, b1 + 60);
	line14[0].color = sf::Color::Magenta;
	line14[1].color = sf::Color::Magenta;

	sf::Text ves_1_2("14", font, 20);
	ves_1_2.setStyle(sf::Text::Bold);
	ves_1_2.setFillColor(sf::Color::Black);
	ves_1_2.setPosition(a1 - 20, b1 + 70);

	sf::Text ves_1_5("12", font, 20);
	ves_1_5.setStyle(sf::Text::Bold);
	ves_1_5.setFillColor(sf::Color::Black);
	ves_1_5.setPosition(a2 + 120, b2);

	sf::Text ves_1_3("10", font, 20);
	ves_1_3.setStyle(sf::Text::Bold);
	ves_1_3.setFillColor(sf::Color::Black);
	ves_1_3.setPosition(a3 - 330, b3 + 46);

	sf::Text ves_1_4("13", font, 20);
	ves_1_4.setStyle(sf::Text::Bold);
	ves_1_4.setFillColor(sf::Color::Black);
	ves_1_4.setPosition(a3 - 315, b4 + 90);

	sf::Text ves_2_1("15", font, 20);
	ves_2_1.setStyle(sf::Text::Bold);
	ves_2_1.setFillColor(sf::Color::Black);
	ves_2_1.setPosition(a3 - 240, b4 + 90);

	sf::Text ves_2_5("18", font, 20);
	ves_2_5.setStyle(sf::Text::Bold);
	ves_2_5.setFillColor(sf::Color::Black);
	ves_2_5.setPosition(a3 - 140, b4 - 120);


	sf::Text ves_5_2("10", font, 20);
	ves_5_2.setStyle(sf::Text::Bold);
	ves_5_2.setFillColor(sf::Color::Black);
	ves_5_2.setPosition(280 + 250, 500);

	sf::Text ves_5_1("11", font, 20);
	ves_5_1.setStyle(sf::Text::Bold);
	ves_5_1.setFillColor(sf::Color::Black);
	ves_5_1.setPosition(500 + 250, 520);


	sf::Text ves_5_7("15", font, 20);
	ves_5_7.setStyle(sf::Text::Bold);
	ves_5_7.setFillColor(sf::Color::Black);
	ves_5_7.setPosition(210 + 250, 530);

	sf::Text ves_5_6("12", font, 20);
	ves_5_6.setStyle(sf::Text::Bold);
	ves_5_6.setFillColor(sf::Color::Black);
	ves_5_6.setPosition(300 + 250, 590);

	sf::Text ves_7_5("14", font, 20);
	ves_7_5.setStyle(sf::Text::Bold);
	ves_7_5.setFillColor(sf::Color::Black);
	ves_7_5.setPosition(430 + 250, 610);

	sf::Text ves_7_6("10", font, 20);
	ves_7_6.setStyle(sf::Text::Bold);
	ves_7_6.setFillColor(sf::Color::Black);
	ves_7_6.setPosition(580 + 250, 560);

	sf::Text ves_6_3("8", font, 20);
	ves_6_3.setStyle(sf::Text::Bold);
	ves_6_3.setFillColor(sf::Color::Black);
	ves_6_3.setPosition(615 + 250, 470);

	sf::Text ves_6_5("10", font, 20);
	ves_6_5.setStyle(sf::Text::Bold);
	ves_6_5.setFillColor(sf::Color::Black);
	ves_6_5.setPosition(590 + 250, 300);

	sf::Text ves_6_4("9", font, 20);
	ves_6_4.setStyle(sf::Text::Bold);
	ves_6_4.setFillColor(sf::Color::Black);
	ves_6_4.setPosition(540 + 250, 350);

	sf::Text ves_4_6("9", font, 20);
	ves_4_6.setStyle(sf::Text::Bold);
	ves_4_6.setFillColor(sf::Color::Black);
	ves_4_6.setPosition(760 + 250, 320);

	sf::Text ves_4_3("16", font, 20);
	ves_4_3.setStyle(sf::Text::Bold);
	ves_4_3.setFillColor(sf::Color::Black);
	ves_4_3.setPosition(460 + 250, 230);

	sf::Text ves_4_1("14", font, 20);
	ves_4_1.setStyle(sf::Text::Bold);
	ves_4_1.setFillColor(sf::Color::Black);
	ves_4_1.setPosition(400 + 250, 140);

	sf::Text ves_3_1("18", font, 20);
	ves_3_1.setStyle(sf::Text::Bold);
	ves_3_1.setFillColor(sf::Color::Black);
	ves_3_1.setPosition(a4 - 20, b4 + 85);

	sf::Text ves_3_6("16", font, 20);
	ves_3_6.setStyle(sf::Text::Bold);
	ves_3_6.setFillColor(sf::Color::Black);
	ves_3_6.setPosition(700 + 250, 470);
	sf::Text ves_1_9("12", font, 20);
	ves_1_9.setStyle(sf::Text::Bold);
	ves_1_9.setFillColor(sf::Color::Black);
	ves_1_9.setPosition(a1 + 130, b1 + 77);
	sf::Text ves_1_10("10", font, 20);
	ves_1_10.setStyle(sf::Text::Bold);
	ves_1_10.setFillColor(sf::Color::Black);
	ves_1_10.setPosition(a4 - 50, b4 - 13);
	sf::Text Pod("", font, 20);
	Pod.setStyle(sf::Text::Bold);
	Pod.setFillColor(sf::Color::Black);
	Pod.setPosition(450, 700);
	Pod.setCharacterSize(30);
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			if (event.type == sf::Event::KeyPressed)
			{
				if (event.key.code == sf::Keyboard::Escape)
				{
					window.close();
				}
			}
			window.clear(sf::Color(200, 200, 200));
			window.draw(sprite);
			window.draw(line1);
			window.draw(line2);
			window.draw(line3);
			window.draw(line4);
			window.draw(line5);
			window.draw(line6);
			window.draw(line7);
			window.draw(line8);
			window.draw(line9);
			window.draw(line11);
			window.draw(line12);
			window.draw(line13);
			window.draw(line14);
			window.draw(line10);
			window.draw(circle2);
			window.draw(text2);
			window.draw(circle1);
			window.draw(text1);
			window.draw(circle5);
			window.draw(text5);
			window.draw(circle7);
			window.draw(text7);
			window.draw(circle6);
			window.draw(text6);
			window.draw(circle4);
			window.draw(text4);
			window.draw(circle3);
			window.draw(text3);
			window.draw(text_result);
			window.draw(text_shortest);
			window.draw(ves_1_2);
			window.draw(ves_1_5);
			window.draw(ves_1_3);
			window.draw(ves_1_4);
			window.draw(ves_2_1);
			window.draw(ves_2_5);
			window.draw(ves_5_2);
			window.draw(ves_5_1);
			window.draw(ves_5_7);
			window.draw(ves_5_6);
			window.draw(ves_7_5);
			window.draw(ves_7_6);
			window.draw(ves_6_3);
			window.draw(ves_6_5);
			window.draw(ves_6_4);
			window.draw(ves_4_6);
			window.draw(ves_4_3);
			window.draw(ves_4_1);
			window.draw(ves_3_1);
			window.draw(ves_3_6);
			window.draw(ves_1_9);
			window.draw(ves_1_10);
			window.draw(Pod);
			window.display();
		}
	}

	return 0;

}