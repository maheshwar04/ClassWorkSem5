widget_weight = 75
gizmo_weight = 112

num_widgets = int(input("Enter the number of widgets: "))
num_gizmos = int(input("Enter the number of gizmos: "))

total_weight = (num_widgets * widget_weight + num_gizmos * gizmo_weight) / 1000
print("Total weight of the parts is", total_weight, "kg.")
