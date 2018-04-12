//
//  ViewController.m
//  CommonCode
//
//  Created by jinlong sheng on 2018/4/12.
//  Copyright © 2018年 sjl. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()<UITableViewDelegate,UITableViewDataSource>{
    UITableView *tableview;
    NSMutableArray *dataArr;
}

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    tableview = [[UITableView alloc]initWithFrame:self.view.bounds];
    [tableview registerClass:[UITableViewCell class] forCellReuseIdentifier: @"cell"];
    tableview.delegate=self;
    tableview.dataSource=self;
    tableview.rowHeight=50;
    [self.view addSubview:tableview];
    dataArr= [NSMutableArray new];
    [self buildData];
 
    
    // Do any additional setup after loading the view, typically from a nib.
}
- (void)buildData{
    [dataArr addObject:@{@"title":@"字符串"}];
    
}
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section{
    return dataArr.count;
}
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    
    NSDictionary *dic = dataArr[indexPath.row];
 
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"cell" forIndexPath:indexPath];
 
    cell.accessoryType = UITableViewCellAccessoryNone;
    cell.textLabel.text = [dic objectForKey:@"title"];
    
    return cell;
   
}
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath{
    switch (indexPath.row) {
        case 0:
            
            break;
        case 1:
            
            break;
        case 2:
            
            break;
        case 3:
            
            break;
            
        default:
            break;
    }
    
}
- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
