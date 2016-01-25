// pplot_test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "PPlot.h"
#include <iostream>

using namespace std;

class myPainter : public Painter
{
public:
	virtual void DrawLine(float inX1, float inY1, float inX2, float inY2) override
	{

		cout << "Draw Line from:" << inX1 << "," << inY1 << " to " << inX2 << "," << inY2 << endl;
		return;

		throw std::logic_error("The method or operation is not implemented.");
	}

	virtual void FillRect(int inX, int inY, int inW, int inH) override
	{
		throw std::logic_error("The method or operation is not implemented.");
	}

	virtual void InvertRect(int inX, int inY, int inW, int inH) override
	{
		throw std::logic_error("The method or operation is not implemented.");
	}

	virtual void SetClipRect(int inX, int inY, int inW, int inH) override
	{
		throw std::logic_error("The method or operation is not implemented.");
	}

	virtual long GetWidth() const override
	{
		return 10;
		throw std::logic_error("The method or operation is not implemented.");
	}

	virtual long GetHeight() const override
	{
		return 10;
		throw std::logic_error("The method or operation is not implemented.");
	}

	virtual void SetLineColor(int inR, int inG, int inB) override
	{
		throw std::logic_error("The method or operation is not implemented.");
	}

	virtual void SetFillColor(int inR, int inG, int inB) override
	{
		throw std::logic_error("The method or operation is not implemented.");
	}

	virtual long CalculateTextDrawSize(const char *inString) override
	{
		return 5;
		throw std::logic_error("The method or operation is not implemented.");
	}

	virtual long GetFontHeight() const override
	{
		return 5;
		throw std::logic_error("The method or operation is not implemented.");
	}

	virtual void DrawText(int inX, int inY, const char *inString) override
	{
		throw std::logic_error("The method or operation is not implemented.");
	}

	virtual void DrawRotatedText(int inX, int inY, float inDegrees, const char *inString) override
	{
		throw std::logic_error("The method or operation is not implemented.");
	}


};

int main()
{

	PPlot p;
	myPainter mp;
	
	PlotDataContainer pdc;

	PlotData pdata;

	pdata.push_back(3.14f);


	

	MakePainterTester(p);
		p.Draw(mp);

	try
	{
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
	

    return 0;
}

