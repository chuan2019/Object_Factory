#include "widgetfactoryinterface.h"
///////////////////////////////////////////////////////////////////////////////////////////////////
// class Widgets0
Widgets0::Widgets0(const QString &ss)
{
	widget = new QWidget;
	layout = new QGridLayout(widget);
	label = new QLabel;
	label->setText(ss);
	layout->addWidget(label, 0, 0);
}
//-------------------------------------------------------------------------------------------------
void Widgets0::Print()
{
	widget->show();
}
//-------------------------------------------------------------------------------------------------
WidgetFactoryInterface* Widgets0::Create(const QString &ss)
{
	return new Widgets0(ss);
}
//-------------------------------------------------------------------------------------------------
///////////////////////////////////////////////////////////////////////////////////////////////////
// class Widgets1
Widgets1::Widgets1(const QString &ss)
{
	widget = new QWidget;
	layout = new QGridLayout(widget);
	button = new QPushButton;
	button->setText(ss);
	layout->addWidget(button, 0, 0);
}
//-------------------------------------------------------------------------------------------------
void Widgets1::Print()
{
	widget->show();
}
//-------------------------------------------------------------------------------------------------
WidgetFactoryInterface* Widgets1::Create(const QString &ss)
{
	return new Widgets1(ss);
}
//-------------------------------------------------------------------------------------------------
///////////////////////////////////////////////////////////////////////////////////////////////////
// class Widgets2
Widgets2::Widgets2(const QString &ss)
{
	widget = new QWidget;
	layout = new QGridLayout(widget);
	line_edit = new QLineEdit;
	line_edit->setText(ss);
	layout->addWidget(line_edit, 0, 0);
}
//-------------------------------------------------------------------------------------------------
void Widgets2::Print()
{
	widget->show();
}
//-------------------------------------------------------------------------------------------------
WidgetFactoryInterface* Widgets2::Create(const QString &ss)
{
	return new Widgets2(ss);
}
//-------------------------------------------------------------------------------------------------

