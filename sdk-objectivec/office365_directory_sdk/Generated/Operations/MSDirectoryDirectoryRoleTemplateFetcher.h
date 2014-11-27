/*******************************************************************************
 * Copyright (c) Microsoft Open Technologies, Inc.
 * All Rights Reserved
 * Licensed under the Apache License, Version 2.0.
 * See License.txt in the project root for license information.
 *
 * Warning: This code was generated automatically. Edits will be overwritten.
 * To make changes to this code, please make changes to the generation framework itself:
 * https://github.com/MSOpenTech/odata-codegen
 *******************************************************************************/

#import <office365_odata_base/office365_odata_base.h>
#import "MSDirectoryDirectoryRoleTemplateOperations.h"
#import "MSDirectoryDirectoryRoleTemplate.h"


/**
* The header for type MSDirectoryDirectoryRoleTemplateFetcher.
*/

@protocol MSDirectoryDirectoryRoleTemplateFetcher

@optional
-(NSURLSessionDataTask *)read:(void (^)(MSDirectoryDirectoryRoleTemplate* directoryRoleTemplate, NSError *error))callback;
-(NSURLSessionDataTask*) updateDirectoryRoleTemplate:(id)entity withCallback:(void (^)(MSDirectoryDirectoryRoleTemplate*, NSError * error))callback;
-(NSURLSessionDataTask*) deleteDirectoryRoleTemplate:(void (^)(int status, NSError * error))callback;

@end

@interface MSDirectoryDirectoryRoleTemplateFetcher : MSODataEntityFetcher<MSDirectoryDirectoryRoleTemplateFetcher>

-(MSDirectoryDirectoryRoleTemplateOperations*) getOperations;

	
@end