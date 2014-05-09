from __future__ import absolute_import, division, print_function

import unittest
from unittest import TestCase, skip
import numpy as np

from gridcells.core import Position2D


class TestPosition2D(TestCase):

    def createPosition(self, nx, ny, dt):
        x = np.arange(nx)
        y = np.arange(ny) + 10
        return Position2D(x, y, dt)

    def test_attributes(self):
        p = self.createPosition(10, 10, 0.02)
        self.assertTrue(np.all(np.arange(10) == p.x))
        self.assertTrue(np.all(np.arange(10)+10 == p.y))
        self.assertEqual(.02, p.dt)


    #def test_equals(self):
    #    p1 = self.createPosition(10, 10, 0.02)
    #    p2 = self.createPosition(10, 10, 0.02)
    #    self.assertEqual

