//
//  OCKEvaluationTableViewController.h
//  CareKit
//
//  Created by Umer Khan on 2/2/16.
//  Copyright © 2016 carekit.org. All rights reserved.
//


#import <UIKit/UIKit.h>
#import <ResearchKit/ResearchKit.h>


NS_ASSUME_NONNULL_BEGIN

@class OCKEvaluation;

@interface OCKEvaluationTableViewController : UITableViewController <ORKTaskViewControllerDelegate>

+ (instancetype)new NS_UNAVAILABLE;

- (instancetype)initWithEvaluations:(NSArray<OCKEvaluation *> *)evaluations;

@property (nonatomic, copy) NSArray<OCKEvaluation *> *evaluations;

@end

NS_ASSUME_NONNULL_END
