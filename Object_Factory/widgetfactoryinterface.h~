#include <QWidget>
#include <QGridLayout>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
///////////////////////////////////////////////////////////////////////////////////////////////////
class WidgetFactoryInterface
{
protected:
	QWidget *widget;
	QGridLayout *layout;
public:
	WidgetFactoryInterface() {}
	virtual void Print() = 0;
	virtual ~WidgetFactoryInterface() {}
};
///////////////////////////////////////////////////////////////////////////////////////////////////
class Widgets0: public WidgetFactoryInterface
{
protected:
	QLabel *label;
public:
	Widgets0(const QString &ss);
	~Widgets0() {delete widget; delete layout; delete label;}
	virtual void Print() override;
	static WidgetFactoryInterface* Create(const QString &ss);
};
///////////////////////////////////////////////////////////////////////////////////////////////////
class Widgets1: public WidgetFactoryInterface
{
protected:
	QPushButton *button;
public:
	Widgets1(const QString &ss);
	~Widgets1() {delete widget; delete layout; delete button;}
	virtual void Print() override;
	static WidgetFactoryInterface* Create(const QString &ss);
};
///////////////////////////////////////////////////////////////////////////////////////////////////
class Widgets2: public WidgetFactoryInterface
{
protected:
	QLineEdit *line_edit;
public:
	Widgets2(const QString &ss);
	~Widgets2() {delete widget; delete layout; delete line_edit;}
	virtual void Print() override;
	static WidgetFactoryInterface* Create(const QString &ss);
};
///////////////////////////////////////////////////////////////////////////////////////////////////

