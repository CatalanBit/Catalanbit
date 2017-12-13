#!/bin/bash
# create multiresolution windows icon
ICON_DST=../../src/qt/res/icons/CATALANBIT.ico

convert ../../src/qt/res/icons/CATALANBIT-16.png ../../src/qt/res/icons/CATALANBIT-32.png ../../src/qt/res/icons/CATALANBIT-48.png ${ICON_DST}
