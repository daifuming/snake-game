#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QGraphicsScene;
class QGraphicsView;

class GameController;

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void adjustViewSize();
	void newGame();

private:
	void createActions();
	void createMenus();

    void initScene();
    void initSceneBackground();


    QGraphicsScene *scene;
    QGraphicsView *view;

    GameController *game;

	QAction *newGameAction;
	QAction *pauseAction;
	QAction *resumeAction;
	QAction *exitAction;
};

#endif // MAINWINDOW_H
