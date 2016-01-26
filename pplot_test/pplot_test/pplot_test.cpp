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

	//	cout << "Draw Line from:" << inX1 << "," << inY1 << " to " << inX2 << "," << inY2 << endl;
		return;

		printf("DRAWLINE:The method or operation is not implemented.\n");
	}

	virtual void FillRect(int inX, int inY, int inW, int inH) override
	{
		printf("FILL RECT:The method or operation is not implemented.\n");
	}

	virtual void InvertRect(int inX, int inY, int inW, int inH) override
	{
		printf("InvertRect:The method or operation is not implemented.\n");
	}

	virtual void SetClipRect(int inX, int inY, int inW, int inH) override
	{
		printf("SetClipRect:The method or operation is not implemented.\n");
	}

	virtual long GetWidth() const override
	{

		printf("GetWidth:The method or operation is not implemented.\n");
		return 200;
	}

	virtual long GetHeight() const override
	{
		printf("GetHeight:The method or operation is not implemented.\n");
		return 200;
	}

	virtual void SetLineColor(int inR, int inG, int inB) override
	{
		printf("SetLineColor:The method or operation is not implemented.\n");
	}

	virtual void SetFillColor(int inR, int inG, int inB) override
	{
		printf("SetFillColor:The method or operation is not implemented.\n");
	}

	virtual long CalculateTextDrawSize(const char *inString) override
	{
		printf("CalcTextDrawSize: %s.\n",inString);
		return 5;
	}

	virtual long GetFontHeight() const override
	{
		printf("GetFontHeight: The method or operation is not implemented.\n");
		return 2;
	}

	virtual void DrawText(int inX, int inY, const char *inString) override
	{
		printf("DrawText: The method or operation is not implemented.\n");
	}

	virtual void DrawRotatedText(int inX, int inY, float inDegrees, const char *inString) override
	{
		printf("DrawRotatedText: The method or operation is not implemented.\n");
	}


};

int main()
{

	PPlot p;
	myPainter mp;
	
	//PlotDataContainer pdc;

//	PlotData pdata;

//	pdata.push_back(3.14f);


	
	
	MakeExamplePlot1(p);
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

