import math

initial_speed = 0
acceleration_due_to_gravity = 9.8

height = float(input("Enter the height from which the object is dropped (in meters): "))

final_speed = math.sqrt(initial_speed**2 + 2 * acceleration_due_to_gravity * height)
print("The final speed of the object when it hits the ground is", final_speed, "m/s.")
