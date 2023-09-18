
from django.db import models

class Agent(models.Model):
    FRONT_END = 'FE'
    MID_CYCLE = 'MC'
    BACK_END = 'BE'
    LEVEL_CHOICES = [
        (FRONT_END, 'Front-End Revenue Cycle'),
        (MID_CYCLE, 'Mid-Rev Cycle'),
        (BACK_END, 'Back-End Revenue Cycle'),
    ]

    name = models.CharField(max_length=100)
    role = models.CharField(max_length=100)
    level = models.CharField(
        max_length=2,
        choices=LEVEL_CHOICES,
        default=FRONT_END,
    )

    def __str__(self):
        return self.name

class Interaction(models.Model):
    from_agent = models.ForeignKey(Agent, on_delete=models.CASCADE, related_name='from_agent')
    to_agent = models.ForeignKey(Agent, on_delete=models.CASCADE, related_name='to_agent')
    interaction_type = models.CharField(max_length=100)

    def __str__(self):
        return f"{self.from_agent.name} to {self.to_agent.name}"
