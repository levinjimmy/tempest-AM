/*****************************************************************************
**  This is part of the g2 library
**  Copyright (C) 1998  Ljubomir Milanovic & Horst Wagner
**
**  This program is free software; you can redistribute it and/or modify
**  it under the terms of the GNU General Public License (version 2) as
**  published by the Free Software Foundation.
**
**  This program is distributed in the hope that it will be useful,
**  but WITHOUT ANY WARRANTY; without even the implied warranty of
**  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**  GNU General Public License for more details.
**
**  You should have received a copy of the GNU General Public License
**  along with this program; if not, write to the Free Software
**  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
******************************************************************************/
#ifndef _G2_PS_H
#define _G2_PS_H

/*
 *  g2 Paper Type
 */
enum g2_PS_paper {	        /*      Name           Size(Pt)   */
 g2_A0,		                /* A0                 2384 x 3370 */
 g2_A1,		                /* A1                 1684 x 2384 */
 g2_A2,		                /* A2                 1191 x 1684 */
 g2_A3,		                /* A3                  842 x 1191 */
 g2_A4,		                /* A4                  595 x  842 */
 g2_A5,		                /* A5                  420 x  595 */
 g2_A6,		                /* A6                  297 x  420 */
 g2_A7,		                /* A7                  210 x  297 */
 g2_A8,		                /* A8                  148 x  210 */
 g2_A9,		                /* A9                  105 x  148 */
 g2_B0,		                /* B0                 2920 x 4127 */
 g2_B1,		                /* B1                 2064 x 2920 */
 g2_B2,		                /* B2                 1460 x 2064 */
 g2_B3,		                /* B3                 1032 x 1460 */
 g2_B4,		                /* B4                  729 x 1032 */
 g2_B5,		                /* B5                  516 x  729 */
 g2_B6,		                /* B6                  363 x  516 */
 g2_B7,		                /* B7                  258 x  363 */
 g2_B8,		                /* B8                  181 x  258 */
 g2_B9,		                /* B9                  127 x  181 */
 g2_B10,                        /* B10                  91 x  127 */
 g2_Comm_10_Envelope,           /* Comm #10 Envelope   297 x  684 */
 g2_C5_Envelope,	        /* C5 Envelope         461 x  648 */
 g2_DL_Envelope,	        /* DL Envelope         312 x  624 */
 g2_Folio,	                /* Folio               595 x  935 */
 g2_Executive,	                /* Executive           522 x  756 */
 g2_Letter,	                /* Letter              612 x  792 */
 g2_Legal,	                /* Legal               612 x 1008 */
 g2_Ledger,	                /* Ledger             1224 x  792 */
 g2_Tabloid	                /* Tabloid             792 x 1224 */
};

/*
 *  g2 Orientation
 */
enum g2_PS_orientation {
    g2_PS_land,			/* landscape */
    g2_PS_port			/* portrait */
};



int g2_open_PS(const char *file_name,
	       enum g2_PS_paper paper,
	       enum g2_PS_orientation orientation);



#endif /* _G2_PS_H */
