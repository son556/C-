import os
import shutil

dir_path = 'C:/Users/AI_server/Desktop/login-lecture/app/yolov5-master/runs/detect/'
dir_list = os.listdir(dir_path)
file_dir_path = dir_path + dir_list[-1]
file_list = os.listdir(file_dir_path)
file_path = file_dir_path + "/" + file_list[0]
dest_path = 'C:/Users/AI_server/Desktop/login-lecture/app/image/' + file_list[0]
shutil.copyfile(file_path, dest_path)