#include <SFML/Graphics.hpp>
#include <time.h>
#include <SFML/Audio.hpp>

using namespace sf;

class Objects {
public:
	Sprite fon, naz, butplay, nastroy, exit, nasupr, pods, back, knop, pknop, nazurav,
		butlev[8], player, ball, nazup, pokup, spokup, nac, block[18], pblock, pula,
		win, naczan, sledur, butmen, life[3], ki, butpause, nadpause, nadprod;
	RectangleShape line;
};

class Boolean {
public:
	bool menu = true, setting = false, pok = true, naskop = false, ad = true, game = false,
		npok = false, puskgame = false, play = false, mball = true, pusklever[8], rblock[18],
		pob = false, blv[8], die = false, pause = false;

	Boolean() {
		for (int i = 0; i < 8; i++)
			pusklever[i] = false;

		for (int i = 0; i < 18; i++)
			rblock[i] = false;

		blv[0] = true;
		for (int i = 1; i < 8; i++)
			blv[i] = false;
	}
};

class setSound {
public:
	SoundBuffer s1, s2, s3, s4, s5, s6;
	Sound button, wall, block, recapture, fall, win;
	bool go;

	setSound() {
		s1.loadFromFile("C:/Users/ПК/Desktop/Programming_Project/Lesson/Play/Play_Arcanoid Cosmos/Arcanoid Cosmos/button.ogg");
		s2.loadFromFile("C:/Users/ПК/Desktop/Programming_Project/Lesson/Play/Play_Arcanoid Cosmos/Arcanoid Cosmos/wall.ogg");
		s3.loadFromFile("C:/Users/ПК/Desktop/Programming_Project/Lesson/Play/Play_Arcanoid Cosmos/Arcanoid Cosmos/block.ogg");
		s4.loadFromFile("C:/Users/ПК/Desktop/Programming_Project/Lesson/Play/Play_Arcanoid Cosmos/Arcanoid Cosmos/recapture.ogg");
		s5.loadFromFile("C:/Users/ПК/Desktop/Programming_Project/Lesson/Play/Play_Arcanoid Cosmos/Arcanoid Cosmos/fall.ogg");
		s6.loadFromFile("C:/Users/ПК/Desktop/Programming_Project/Lesson/Play/Play_Arcanoid Cosmos/Arcanoid Cosmos/win.ogg");

		button.setBuffer(s1);
		wall.setBuffer(s2);
		block.setBuffer(s3);
		recapture.setBuffer(s4);
		fall.setBuffer(s5);
		win.setBuffer(s6);

		go = true;
	}
};

setSound sound;

int main()
{
	srand(time(0));

	RenderWindow window(VideoMode(1200, 800), "ArkanoidCosmos!");

	Objects o;
	Boolean b;

	Texture t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12, t13, t14, t15, t16, t17, t18,
		t19, t20, t21, t22, t23, t24, t25, t26, t27, t28;
	t1.loadFromFile("C:/Users/ПК/Desktop/Programming_Project/Lesson/Play/Play_Arcanoid Cosmos/Arcanoid Cosmos/Painting/fon.png");
	t2.loadFromFile("C:/Users/ПК/Desktop/Programming_Project/Lesson/Play/Play_Arcanoid Cosmos/Arcanoid Cosmos/Painting/naz.png");
	t3.loadFromFile("C:/Users/ПК/Desktop/Programming_Project/Lesson/Play/Play_Arcanoid Cosmos/Arcanoid Cosmos/Painting/butplay.png");
	t4.loadFromFile("C:/Users/ПК/Desktop/Programming_Project/Lesson/Play/Play_Arcanoid Cosmos/Arcanoid Cosmos/Painting/nastroy.png");
	t5.loadFromFile("C:/Users/ПК/Desktop/Programming_Project/Lesson/Play/Play_Arcanoid Cosmos/Arcanoid Cosmos/Painting/exit.png");
	t6.loadFromFile("C:/Users/ПК/Desktop/Programming_Project/Lesson/Play/Play_Arcanoid Cosmos/Arcanoid Cosmos/Painting/nasupr.png");
	t7.loadFromFile("C:/Users/ПК/Desktop/Programming_Project/Lesson/Play/Play_Arcanoid Cosmos/Arcanoid Cosmos/Painting/pods.png");
	t8.loadFromFile("C:/Users/ПК/Desktop/Programming_Project/Lesson/Play/Play_Arcanoid Cosmos/Arcanoid Cosmos/Painting/back.png");
	t9.loadFromFile("C:/Users/ПК/Desktop/Programming_Project/Lesson/Play/Play_Arcanoid Cosmos/Arcanoid Cosmos/Painting/knop.png");
	t10.loadFromFile("C:/Users/ПК/Desktop/Programming_Project/Lesson/Play/Play_Arcanoid Cosmos/Arcanoid Cosmos/Painting/pknop.png");
	t11.loadFromFile("C:/Users/ПК/Desktop/Programming_Project/Lesson/Play/Play_Arcanoid Cosmos/Arcanoid Cosmos/Painting/nazurav.png");
	t12.loadFromFile("C:/Users/ПК/Desktop/Programming_Project/Lesson/Play/Play_Arcanoid Cosmos/Arcanoid Cosmos/Painting/butlev.png");
	t13.loadFromFile("C:/Users/ПК/Desktop/Programming_Project/Lesson/Play/Play_Arcanoid Cosmos/Arcanoid Cosmos/Painting/player.png");
	t14.loadFromFile("C:/Users/ПК/Desktop/Programming_Project/Lesson/Play/Play_Arcanoid Cosmos/Arcanoid Cosmos/Painting/ball.png");
	t15.loadFromFile("C:/Users/ПК/Desktop/Programming_Project/Lesson/Play/Play_Arcanoid Cosmos/Arcanoid Cosmos/Painting/nazup.png");
	t16.loadFromFile("C:/Users/ПК/Desktop/Programming_Project/Lesson/Play/Play_Arcanoid Cosmos/Arcanoid Cosmos/Painting/pokup.png");
	t17.loadFromFile("C:/Users/ПК/Desktop/Programming_Project/Lesson/Play/Play_Arcanoid Cosmos/Arcanoid Cosmos/Painting/spokup.png");
	t18.loadFromFile("C:/Users/ПК/Desktop/Programming_Project/Lesson/Play/Play_Arcanoid Cosmos/Arcanoid Cosmos/Painting/nac.png");
	t19.loadFromFile("C:/Users/ПК/Desktop/Programming_Project/Lesson/Play/Play_Arcanoid Cosmos/Arcanoid Cosmos/Painting/block.png");
	t20.loadFromFile("C:/Users/ПК/Desktop/Programming_Project/Lesson/Play/Play_Arcanoid Cosmos/Arcanoid Cosmos/Painting/pula.png");
	t21.loadFromFile("C:/Users/ПК/Desktop/Programming_Project/Lesson/Play/Play_Arcanoid Cosmos/Arcanoid Cosmos/Painting/win.png");
	t22.loadFromFile("C:/Users/ПК/Desktop/Programming_Project/Lesson/Play/Play_Arcanoid Cosmos/Arcanoid Cosmos/Painting/naczan.png");
	t23.loadFromFile("C:/Users/ПК/Desktop/Programming_Project/Lesson/Play/Play_Arcanoid Cosmos/Arcanoid Cosmos/Painting/sledur.png");
	t24.loadFromFile("C:/Users/ПК/Desktop/Programming_Project/Lesson/Play/Play_Arcanoid Cosmos/Arcanoid Cosmos/Painting/butmen.png");
	t25.loadFromFile("C:/Users/ПК/Desktop/Programming_Project/Lesson/Play/Play_Arcanoid Cosmos/Arcanoid Cosmos/Painting/ki.png");
	t26.loadFromFile("C:/Users/ПК/Desktop/Programming_Project/Lesson/Play/Play_Arcanoid Cosmos/Arcanoid Cosmos/Painting/butpause.png");
	t27.loadFromFile("C:/Users/ПК/Desktop/Programming_Project/Lesson/Play/Play_Arcanoid Cosmos/Arcanoid Cosmos/Painting/nadpause.png");
	t28.loadFromFile("C:/Users/ПК/Desktop/Programming_Project/Lesson/Play/Play_Arcanoid Cosmos/Arcanoid Cosmos/Painting/nadprod.png");

	o.fon.setTexture(t1);

	o.naz.setTexture(t2);
	o.naz.setPosition(80, 50);
	o.butplay.setTexture(t3);
	o.butplay.setPosition(50, 400);
	o.nastroy.setTexture(t4);
	o.nastroy.setPosition(550, 400);
	o.exit.setTexture(t5);
	o.exit.setPosition(400, 600);

	o.nasupr.setTexture(t6);
	o.nasupr.setPosition(200, 200);
	o.pods.setTexture(t7);
	o.pods.setTextureRect(IntRect(890, 0, 808, 89));
	o.pods.setPosition(220, 400);
	o.back.setTexture(t8);

	o.knop.setTexture(t9);
	o.knop.setPosition(320, 200);
	o.pknop.setTexture(t10);
	int px = 320;

	o.nazurav.setTexture(t11);
	o.nazurav.setPosition(300, 50);
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 2; j++) {
			o.butlev[j * 4 + i].setTexture(t12);
			o.butlev[j * 4 + i].setTextureRect(IntRect(0, 0, 160, 160));
			o.butlev[j * 4 + i].setPosition(150 + 250 * i, 250 + 250 * j);
		}
	o.butlev[0].setTextureRect(IntRect(0, 160, 160, 160));

	o.player.setTexture(t13);
	o.ball.setTexture(t14);
	int kx = 1, ky = 1;

	o.nazup.setTexture(t15);
	o.nazup.setPosition(50, 570);
	o.pokup.setTexture(t16);
	o.pokup.setPosition(740, 550);
	o.spokup.setTexture(t17);
	o.spokup.setPosition(740, 550);
	o.nac.setTexture(t18);
	o.nac.setPosition(900, 680);

	o.line.setSize(Vector2f(1200, 1));
	o.line.setFillColor(Color::White);
	o.line.setPosition(0, 100);

	for (int i = 0; i < 6; i++)
		for (int j = 0; j < 3; j++) {
			o.block[j * 6 + i].setTexture(t19);
			o.block[j * 6 + i].setTextureRect(IntRect(0, 0, 140, 26));
		}
	o.pblock.setTexture(t19);
	o.pblock.setTextureRect(IntRect(280, 0, 140, 26));
	int pbx = 1, db = 0, lv = 0;

	o.pula.setTexture(t20);
	o.pula.setPosition(1200, 100);
	int pl = rand() % 1000;

	o.win.setTexture(t21);
	o.win.setPosition(400, 200);
	o.naczan.setTexture(t22);
	o.naczan.setPosition(150, 350);
	o.sledur.setTexture(t23);
	o.sledur.setPosition(350, 470);
	o.butmen.setTexture(t24);
	o.butmen.setPosition(150, 600);
	o.ki.setTexture(t25);
	o.ki.setPosition(350, 200);

	for (int i = 0; i < 3; i++) {
		o.life[i].setTexture(t14);
		o.life[i].setPosition(10 + 100 * i, 10);
		o.life[i].setScale(0.9, 0.9);
	}
	int lf = 3;

	o.butpause.setTexture(t26);
	o.butpause.setPosition(1080, 5);
	o.nadpause.setTexture(t27);
	o.nadpause.setPosition(400, 200);
	o.nadprod.setTexture(t28);
	o.nadprod.setPosition(350, 470);

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();

			if (event.type == Event::MouseButtonPressed)
				if (event.key.code == Mouse::Left) {
					if (b.play && b.mball)
						b.mball = false;

					Vector2i pos = Mouse::getPosition(window);

					if (b.menu) {
						if (pos.x >= 400 && pos.x <= 748 &&
							pos.y >= 600 && pos.y <= 741)
							window.close();

						if (pos.x >= 550 && pos.x <= 1164 &&
							pos.y >= 400 && pos.y <= 543) {
							sound.button.play();

							b.menu = false;
							b.setting = true;

							o.back.setPosition(220, 600);
						}

						if (pos.x >= 50 && pos.x <= 433 &&
							pos.y >= 400 && pos.y <= 533) {
							sound.button.play();

							b.menu = false;
							b.game = true;

							o.back.setPosition(150, 690);
						}
					}

					else if (b.setting) {
						if (pos.x >= 220 && pos.x <= 465 &&
							pos.y >= 600 && pos.y <= 696) {
							sound.button.play();

							b.menu = true;
							b.setting = false;
						}

						if (pos.x >= 220 && pos.x <= 1028 &&
							pos.y >= 400 && pos.y <= 489 && b.pok) {
							sound.button.play();

							b.pok = false;

							o.pods.setTextureRect(IntRect(0, 0, 890, 89));
							o.pods.setPosition(180, 400);
						}

						else if (pos.x >= 180 && pos.x <= 1070 &&
							pos.y >= 400 && pos.y <= 489 && !b.pok) {
							sound.button.play();

							b.pok = true;

							o.pods.setTextureRect(IntRect(890, 0, 808, 89));
							o.pods.setPosition(220, 400);
						}

						if (pos.x >= 200 && pos.x <= 1022 &&
							pos.y >= 200 && pos.y <= 297) {
							sound.button.play();

							b.setting = false;
							b.naskop = true;
						}
					}

					else if (b.naskop) {
						if (pos.x >= 583 && pos.x <= 847 &&
							pos.y >= 200 && pos.y <= 355 &&
							b.ad) {
							sound.button.play();

							b.ad = false;
						}

						if (pos.x >= 320 && pos.x <= 583 &&
							pos.y >= 200 && pos.y <= 355 &&
							!b.ad) {
							sound.button.play();

							b.ad = true;
						}

						if (pos.x >= 220 && pos.x <= 465 &&
							pos.y >= 600 && pos.y <= 696) {
							sound.button.play();

							b.setting = true;
							b.naskop = false;
						}
					}

					else if (b.game) {
						if (pos.x >= 150 && pos.x <= 395 &&
							pos.y >= 690 && pos.y <= 786) {
							sound.button.play();

							b.menu = true;
							b.game = false;
						}

						for (int i = 0; i < 4; i++)
							for (int j = 0; j < 2; j++)
								if (pos.x >= 150 + 250 * i && pos.x <= 310 + 250 * i &&
									pos.y >= 250 + 250 * j && pos.y <= 410 + 250 * j) {
									sound.button.play();

									if (b.blv[j * 4 + i]) {
										b.game = false;
										b.pusklever[j * 4 + i] = true;
										lv = j * 4 + i;

										if (b.pok) {
											b.npok = true;

											//Координаты игрока и меча в подсказки
											o.player.setPosition(400, 500);
											o.ball.setPosition(510, 415);
										}

										else
											b.puskgame = true;
									}
								}
					}

					else if (b.npok) {
						if (pos.x >= 150 && pos.x <= 395 &&
							pos.y >= 690 && pos.y <= 786) {
							sound.button.play();

							b.game = true;
							b.npok = false;
						}

						if (pos.x >= 900 && pos.x <= 1145 &&
							pos.y >= 680 && pos.y <= 776) {
							sound.button.play();

							b.npok = false;
							b.puskgame = true;
						}
					}

					else if (b.pob || b.die || b.pause) {
						if (pos.x >= 150 && pos.x <= 615 &&
							pos.y >= 350 && pos.y <= 432) {
							sound.button.play();
							sound.go = true;

							b.pob = false;
							b.puskgame = true;

							for (int i = 0; i < 6; i++)
								for (int j = 0; j < 3; j++)
									o.block[j * 6 + i].setPosition(25 + 200 * i, 100 + 100 * (j + 1));
							db = 0;
						}

						if (pos.x >= 350 && pos.x <= 1062 &&
							pos.y >= 470 && pos.y <= 556 && lv < 7 && !b.die && !b.pause) {
							sound.button.play();
							sound.go = true;

							b.pob = false;
							b.puskgame = true;

							b.pusklever[lv] = false;
							b.pusklever[lv + 1] = true;
							lv++;

							for (int i = 0; i < 6; i++)
								for (int j = 0; j < 3; j++)
									o.block[j * 6 + i].setPosition(25 + 200 * i, 100 + 100 * (j + 1));
							db = 0;
						}

						if (pos.x >= 150 && pos.x <= 720 &&
							pos.y >= 600 && pos.y <= 663) {
							sound.button.play();
							sound.go = true;

							b.pob = false;
							b.menu = true;
							b.play = false;
							b.die = false;
							b.pause = false;

							for (int i = 0; i < 8; i++)
								b.pusklever[i] = false;
						}

						if (pos.x >= 350 && pos.x <= 894 &&
							pos.y >= 470 && pos.y <= 550 && b.pause) {
							sound.button.play();
							sound.go = true;

							b.pause = false;
							b.mball = true;
						}
					}

					else if (b.play)
						if (pos.x >= 1080 && pos.x <= 1187 &&
							pos.y >= 5 && pos.y <= 97) {
							sound.button.play();

							b.pause = true;
						}
				}
		}

		if (b.puskgame) {
			b.play = true;
			b.mball = true;
			lf = 3;
			b.die = false;
			b.pause = false;

			for (int i = 0; i < 6; i++)
				for (int j = 0; j < 3; j++)
					o.block[j * 6 + i].setPosition(25 + 200 * i, 100 + 100 * (j + 1));
			db = 0;

			for (int i = 6; i < 12; i++)
				if (b.pusklever[1] || b.pusklever[3] ||
					b.pusklever[5] || b.pusklever[7]) {
					o.block[i].setTextureRect(IntRect(140, 0, 140, 26));
					b.rblock[i] = true;
				}
				else {
					o.block[i].setTextureRect(IntRect(0, 0, 140, 26));
					b.rblock[i] = false;
				}

			o.player.setPosition(400, 750);
			o.ball.setPosition(510, 660);
			kx = 1;
			ky = 1;

			if (b.pusklever[2] || b.pusklever[3] ||
				b.pusklever[6] || b.pusklever[7])
				o.pblock.setPosition(0, 550);
			else
				o.pblock.setPosition(1300, 550);

			for (int i = 4; i < 8; i++)
				if (b.pusklever[i]) {
					int pl = rand() % 1030;
					o.pula.setPosition(pl, 100);
				}

			b.puskgame = false;
		}

		if ((b.npok || (!b.mball && b.play)) && !b.pause)
			o.ball.move(0.75 * kx, 0.75 * ky); //Мячь движется

		Vector2f p = o.player.getPosition();
		Vector2f bl = o.ball.getPosition();

		if ((bl.y < 0 && b.npok) || (bl.y < 100 && b.play)) {//Мячь отбивается от стен
			if (b.play)
				sound.wall.play();

			ky *= -1;
		}
		if (bl.x > 1110 || bl.x < 0) {
			if (b.play)
				sound.wall.play();

			kx *= -1;
		}

		//Игрок отбивает мяч
		if (o.ball.getGlobalBounds().intersects(o.player.getGlobalBounds())) {
			if (b.play)
				sound.recapture.play();

			ky *= -1;

			o.ball.move(0, -0.5);
		}

		if (b.npok) {
			if (p.x < bl.x && p.x < 870) {
				o.player.move(0.75, 0); //Игрок двигается

				//Подсказки управления
				if (b.pok && b.npok) {
					if (b.ad)
						o.pokup.setTextureRect(IntRect(204, 0, 204, 127));
					else
						o.spokup.setTextureRect(IntRect(204, 0, 204, 127));
				}
			}

			else if (p.x > bl.x) {
				o.player.move(-0.75, 0); //Игрок двигается

				//Подсказки управления
				if (b.pok && b.npok) {
					if (b.ad)
						o.pokup.setTextureRect(IntRect(0, 0, 204, 127));
					else
						o.spokup.setTextureRect(IntRect(0, 0, 204, 127));
				}
			}
		}

		if (b.play) {

			if (!b.pause) {
				if (b.ad) {
					if (Keyboard::isKeyPressed(Keyboard::D))
						if (p.x < 870) {
							o.player.move(0.9, 0);

							if (b.mball)
								o.ball.move(0.9, 0);
						}
					if (Keyboard::isKeyPressed(Keyboard::A))
						if (p.x > 0) {
							o.player.move(-0.9, 0);

							if (b.mball)
								o.ball.move(-0.9, 0);
						}
				}
				else {
					if (Keyboard::isKeyPressed(Keyboard::Right))
						if (p.x < 870) {
							o.player.move(0.75, 0);

							if (b.mball)
								o.ball.move(0.75, 0);
						}
					if (Keyboard::isKeyPressed(Keyboard::Left))
						if (p.x > 0) {
							o.player.move(-0.9, 0);

							if (b.mball)
								o.ball.move(-0.9, 0);
						}
				}
			}

			for (int i = 0; i < 18; i++)
				if (o.ball.getGlobalBounds().intersects(o.block[i].getGlobalBounds())) {
					ky *= -1;
					o.ball.move(0, 0.1 * ky);

					if (!b.rblock[i]) {
						sound.block.play();

						o.block[i].setPosition(1300, 0);
						db++;
					}
					else {
						o.block[i].setTextureRect(IntRect(0, 0, 140, 26));

						b.rblock[i] = false;
					}
				}

			if (b.mball && bl.y != 660)
				b.mball = false;

			if (!b.mball && !b.pause) {
				if (b.pusklever[2] || b.pusklever[3] ||
					b.pusklever[6] || b.pusklever[7]) {
					o.pblock.move(0.5 * pbx, 0);

					Vector2f pb = o.pblock.getPosition();
					if (pb.x < 0 || pb.x > 1060)
						pbx *= -1;

					if (o.ball.getGlobalBounds().intersects(o.pblock.getGlobalBounds())) {
						sound.wall.play();

						ky *= -1;
					}
				}

				for (int i = 4; i < 8; i++)
					if (b.pusklever[i]) {
						o.pula.move(0, 0.3);

						Vector2f pu = o.pula.getPosition();
						if (pu.y > 850) {
							pl = rand() % 1030;
							o.pula.setPosition(pl, 100);
						}

						if (o.ball.getGlobalBounds().intersects(o.pula.getGlobalBounds())) {
							sound.block.play();

							ky *= -1;

							pl = rand() % 1030;
							o.pula.setPosition(pl, 100);
						}

						if (o.player.getGlobalBounds().intersects(o.pula.getGlobalBounds())) {
							sound.fall.play();

							b.mball = true;
							lf--;

							o.player.setPosition(400, 750);
							o.ball.setPosition(510, 660);

							pl = rand() % 1030;
							o.pula.setPosition(pl, 100);
						}
					}
			}

			if (bl.y > 800) {
				sound.fall.play();

				b.mball = true;
				lf--;

				o.player.setPosition(400, 750);
				o.ball.setPosition(510, 660);
			}

			if (db == 18) {
				sound.win.play();

				b.pob = true;
				b.play = false;

				b.blv[lv + 1] = true;
			}

			if (lf == 0) {
				b.play = false;
				b.die = true;
			}

			if (Keyboard::isKeyPressed(Keyboard::Escape)) {
				if (sound.go) {
					sound.button.play();

					sound.go = false;
				}

				b.pause = true;
			}
		}

		if (b.blv[1])
			o.butlev[1].setTextureRect(IntRect(160, 160, 160, 160));
		if (b.blv[2])
			o.butlev[2].setTextureRect(IntRect(160 * 2, 160, 160, 160));
		if (b.blv[3])
			o.butlev[3].setTextureRect(IntRect(160 * 3, 160, 160, 160));
		if (b.blv[4])
			o.butlev[4].setTextureRect(IntRect(0, 160 * 2, 160, 160));
		if (b.blv[5])
			o.butlev[5].setTextureRect(IntRect(160, 160 * 2, 160, 160));
		if (b.blv[6])
			o.butlev[6].setTextureRect(IntRect(160 * 2, 160 * 2, 160, 160));
		if (b.blv[7])
			o.butlev[7].setTextureRect(IntRect(160 * 3, 160 * 2, 160, 160));

		if (!b.ad && px != 583)
			px++;
		else if (b.ad && px != 320)
			px--;
		o.pknop.setPosition(px, 400);

		if (db == 18 && b.die) {
			b.die = false;
			b.pob = true;
		}

		window.draw(o.fon);

		if (b.menu) {
			window.draw(o.naz);
			window.draw(o.butplay);
			window.draw(o.nastroy);
			window.draw(o.exit);
		}

		if (b.setting) {
			window.draw(o.nasupr);
			window.draw(o.pods);
			window.draw(o.back);
		}

		if (b.naskop) {
			window.draw(o.knop);
			window.draw(o.pknop);
			window.draw(o.back);
		}

		if (b.game) {
			window.draw(o.nazurav);
			window.draw(o.back);
			for (int i = 0; i < 8; i++)
				window.draw(o.butlev[i]);
		}

		if (b.npok) {
			window.draw(o.player);
			window.draw(o.ball);
			window.draw(o.back);
			window.draw(o.nazup);
			window.draw(o.nac);

			if (b.ad)
				window.draw(o.pokup);
			else
				window.draw(o.spokup);
		}

		if (b.play || b.pob || b.die) {
			window.draw(o.line);

			if (!b.pause)
				window.draw(o.butpause);

			if (!b.die) {
				window.draw(o.player);
				window.draw(o.ball);
			}

			window.draw(o.pblock);

			for (int i = 0; i < lf; i++)
				window.draw(o.life[i]);

			for (int i = 4; i < 8; i++)
				if (b.pusklever[i])
					window.draw(o.pula);

			for (int i = 0; i < 18; i++)
				window.draw(o.block[i]);

			if (b.pob || b.die || b.pause) {
				if (!b.die && b.pob)
					window.draw(o.win);
				else if (b.die && !b.pob)
					window.draw(o.ki);
				else if (b.pause) {
					window.draw(o.nadpause);
					window.draw(o.nadprod);
				}

				window.draw(o.naczan);

				if (lv < 7 && !b.die && !b.pause)
					window.draw(o.sledur);

				window.draw(o.butmen);
			}
		}

		window.display();
	}

	return 0;
}