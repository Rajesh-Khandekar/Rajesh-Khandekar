#!/usr/bin/env python
# coding: utf-8

# In[1]:


def main():
    body_mass_index()
    

#define variables
get_height = 0.0
get_weight = 0.0
BMI= 0.0
Healthy =['Eggs', 'Olives', 'Dairy', 'Meat',]
Unhealthy =['chocolate','pizza', 'ice cream']


# In[2]:


#height = float(input("Input your height in Feet: "))
#weight = float(input("Input your weight in Kilogram: "))
#print("Your body mass index is: ", round(weight / (height * height), 2))


# In[3]:


height = float(input("Enter your height in cm: "))
weight = float(input("Enter your weight in kg: "))

BMI = weight / (height/100)**2
print(f"You BMI is {BMI}")


# In[4]:


if BMI < 18.5:
    print("A user with a BMI of " + str(BMI) + " is underwieght ")
    print("you are underwight .You can eat whatever you want ")
    Unhealthy_food =Unhealthy[0:]
    print("Unhealthy_food")
elif BMI < 24.9:
    print("A user with a BMI of " + str(BMI ) + " is normal weight ")
    print("You Are Perfectly Fit keep your diet as it is")
else:
    print("A user with a BMI of " + str(BMI ) + " is overweight ")
    print("You Are overweight . Try to Eat vegetables and healthy food ")
    Healthy_food=Healthy[0:]
    print("Healthy_food")


# In[ ]:





# In[ ]:




