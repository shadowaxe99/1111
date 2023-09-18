
import unittest
from django.test import TestCase
from agents.models import FrontEndAgent, MidRevAgent, BackEndAgent

class AgentModelTest(TestCase):
    def setUp(self):
        self.front_end_agent = FrontEndAgent.objects.create(name="FrontEndAgent1")
        self.mid_rev_agent = MidRevAgent.objects.create(name="MidRevAgent1", parent=self.front_end_agent)
        self.back_end_agent = BackEndAgent.objects.create(name="BackEndAgent1", parent=self.mid_rev_agent)

    def test_front_end_agent_creation(self):
        self.assertTrue(isinstance(self.front_end_agent, FrontEndAgent))
        self.assertEqual(self.front_end_agent.__str__(), self.front_end_agent.name)

    def test_mid_rev_agent_creation(self):
        self.assertTrue(isinstance(self.mid_rev_agent, MidRevAgent))
        self.assertEqual(self.mid_rev_agent.__str__(), self.mid_rev_agent.name)

    def test_back_end_agent_creation(self):
        self.assertTrue(isinstance(self.back_end_agent, BackEndAgent))
        self.assertEqual(self.back_end_agent.__str__(), self.back_end_agent.name)

if __name__ == '__main__':
    unittest.main()
