import numpy as np
from scipy.spatial import ConvexHull
from scipy.spatial import Delaunay, Voronoi, voronoi_plot_2d
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d.art3d import Poly3DCollection
from mpl_toolkits.mplot3d import Axes3D
from shapely.geometry import Polygon


point = np.array([1,2])

# Transformation Matrices
translation = np.array([[1, 0, 3],  # Translate by 3 in x
                        [0, 1, 4],  # Translate by 4 in y
                        [0, 0, 1]])

rotation = np.array([[0, -1, 0],  # 90-degree rotation
                     [1, 0, 0],
                     [0, 0, 1]])


point_homongeneous  = np.append(point, 1)
transformed_point = np.dot(translation, point_homongeneous)
rotated_point = np.dot(rotation, point_homongeneous)

print("Translated Point: ", transformed_point)
print("Rotated Point", rotated_point)


p1 = np.array([1, 2])
p2 = np.array([4, 6])

distance = np.linalg.norm(p2 - p1)
print("Distance:", distance)

# x = [1, 2, 3]
# y = [4, 5, 6]

# plt.plot(x, y, color='blue')
# plt.title("Test Plot")
# plt.show()

# x = [1, 2, 3]
# y = [4, 5, 6]
# plt.plot(x, y, label="Line")
# plt.legend()
# plt.show()

# plt.scatter([1, 2, 3], [4, 5, 6])
# plt.show()

# plt.bar(['A', 'B', 'C'], [5, 7, 3])
# plt.show()

# data = [1, 1, 2, 2, 3, 3, 4, 4]
# plt.hist(data, bins=4)
# plt.show()

# plt.subplot(1, 2, 1)
# plt.plot([1, 2, 3], [4, 5, 6])
# plt.title("Plot 1")

# plt.subplot(1, 2, 2)
# plt.bar([1, 2, 3], [3, 2, 1])
# plt.title("Plot 2")

# plt.tight_layout()
# plt.show()

# fig = plt.figure()
# ax = fig.add_subplot(111, projection='3d')

# x = [1, 2, 3]
# y = [4, 5, 6]
# z = [7, 8, 9]

# ax.scatter3D(x, y, z)
# plt.show()

# # Generate random 3D points
# points = np.random.rand(30, 3)  # 30 random points in 3D space

# # Compute the convex hull
# hull = ConvexHull(points)

# # Plot the convex hull
# fig = plt.figure()
# ax = fig.add_subplot(111, projection="3d")

# # Plot original points
# ax.scatter(points[:, 0], points[:, 1], points[:, 2])

# # Plot the hull
# for simplex in hull.simplices:
#     triangle = [points[simplex[0]], points[simplex[1]], points[simplex[2]]]
#     ax.add_collection3d(Poly3DCollection([triangle], alpha=0.3, edgecolor="r"))

# plt.title("Convex Hull of 3D Points")
# plt.show()

# # Parameters for the cylinder
# radius = 2
# height = 5
# theta = np.linspace(0, 2 * np.pi, 50)  # Angular slices
# z = np.linspace(0, height, 50)  # Height slices
# theta, z = np.meshgrid(theta, z)

# # Parametric equations for the cylinder
# x = radius * np.cos(theta)
# y = radius * np.sin(theta)

# # Plot the cylinder
# fig = plt.figure()
# ax = fig.add_subplot(111, projection="3d")
# ax.plot_surface(x, y, z, color="cyan", edgecolor="k", alpha=0.7)

# plt.title("Parametric Cylinder")
# plt.show()

# # Define a plane: Ax + By + Cz + D = 0
# plane_normal = np.array([0, 0, 1])  # Plane normal (z = 0 plane)
# plane_point = np.array([0, 0, 0])  # A point on the plane
# D = -np.dot(plane_normal, plane_point)

# # Define a line: P = P0 + t * d
# line_point = np.array([1, 2, 3])  # A point on the line
# line_direction = np.array([0, 0, -1])  # Line direction (pointing downward)

# # Compute intersection using t = -(n⋅P0 + D) / (n⋅d)
# denominator = np.dot(plane_normal, line_direction)

# if abs(denominator) > 1e-6:  # Avoid division by zero
#     t = - (np.dot(plane_normal, line_point) + D) / denominator
#     intersection = line_point + t * line_direction
#     print("Intersection Point:", intersection)
# else:
#     print("Line is parallel to the plane.")

# # Define two triangles
# triangle1 = Polygon([(0, 0), (2, 0), (1, 2)])
# triangle2 = Polygon([(1, 1), (3, 1), (2, 3)])

# # Compute the intersection
# intersection = triangle1.intersection(triangle2)

# # Print and visualize
# print("Intersection Area:", intersection.area)
# print("Intersection Polygon:", intersection)

# fig, ax = plt.subplots()

# # Plot the triangles
# x1, y1 = triangle1.exterior.xy
# x2, y2 = triangle2.exterior.xy
# ax.fill(x1, y1, alpha=0.5, label="Triangle 1")
# ax.fill(x2, y2, alpha=0.5, label="Triangle 2")

# # Plot intersection
# if not intersection.is_empty:
#     x3, y3 = intersection.exterior.xy
#     ax.fill(x3, y3, alpha=0.8, color="red", label="Intersection")

# plt.legend()
# plt.title("Boolean Intersection of Two Triangles")
# plt.show()

# # Generate random points
# points = np.random.rand(20, 2)

# # Delaunay Triangulation
# tri = Delaunay(points)

# # Plot Delaunay Triangulation
# plt.triplot(points[:, 0], points[:, 1], tri.simplices, color="blue")
# plt.plot(points[:, 0], points[:, 1], "o", label="Points")
# plt.title("Delaunay Triangulation")
# plt.legend()
# plt.show()

# # Voronoi Diagram
# vor = Voronoi(points)
# fig = voronoi_plot_2d(vor)
# plt.title("Voronoi Diagram")
# plt.show()

# Generate two sets of 3D points
points1 = np.array([
    [0, 0, 0],
    [1, 1, 0],
    [1, 0, 1],
    [0, 1, 1],
    [1, 1, 1],
    [0.5, 0.5, 1.5],
    [0.5, 0.5, 0.5]
])

points2 = np.array([
    [0.5, 0.5, 0.5],
    [1, 1, 1],
    [1.5, 1.5, 1],
    [1.5, 1, 1.5],
    [1, 1.5, 1.5],
    [0.5, 1, 1],
    [1, 0.5, 1]
])

# Compute the Convex Hulls
hull1 = ConvexHull(points1)
hull2 = ConvexHull(points2)

# 3D Plot
fig = plt.figure(figsize=(10, 8))
ax = fig.add_subplot(111, projection='3d')

# Function to plot convex hull
def plot_hull(ax, hull, points, color, label):
    for simplex in hull.simplices:
        vertices = points[simplex]
        ax.add_collection3d(Poly3DCollection([vertices], color=color, alpha=0.3, edgecolor='k'))
    ax.scatter(points[:, 0], points[:, 1], points[:, 2], color=color, s=50, label=label)

# Plot the two convex hulls
plot_hull(ax, hull1, points1, 'blue', 'Hull 1')
plot_hull(ax, hull2, points2, 'green', 'Hull 2')

# Plot overlapping points
ax.scatter(0.5, 0.5, 0.5, color='red', s=100, label='Possible Overlap')

# Customize plot
ax.set_title('3D Convex Hulls')
ax.set_xlabel('X')
ax.set_ylabel('Y')
ax.set_zlabel('Z')
ax.legend()

plt.show()