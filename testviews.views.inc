<?php
function testviews_views_data(){
  $data['testviews']['table']['group'] = t('Test Views Table');
  //define as base table
  $data['testviews']['table']['base'] = array(
    'field' => 'id', //the primary key of the table
    'title' => t('Test Views table'),
    'help' => t('The Test Views Table Help Text :DDD'),
  );
  
  $data['testviews']['loan_time'] = array(
    'title' => t('Loan Timestamp field'),
    'help' => t('Loan Just a timestamp field.'),
    'field' => array(
      'handler' => 'views_handler_field_date',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_date',
    ),
    'filter' => array(
      'handler' => 'date_views_filter_handler',
      'is date' => TRUE,
    ),
    'argument' => array(
      'handler' => 'date_views_argument_handler',
      'empty field name' => t('Undated'),
      'is date' => TRUE,
    ),
  );
  
  $data['testviews']['expected_return'] = array(
    'title' => t('Expected return date'),
    'help' => t('Loan Just a timestamp field.'),
    'field' => array(
      'handler' => 'date_views_filter_handler',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_date',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_date',
      'is date' => TRUE,
    ),
    'argument' => array(
      'handler' => 'date_views_argument_handler',
      'empty field name' => t('Undated'),
      'is date' => TRUE,
    ),
  );
  
  $data['testviews']['observed_return'] = array(
    'title' => t('Real return date'),
    'help' => t('Loan Just a timestamp field.'),
    'field' => array(
      'handler' => 'date_views_filter_handler',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_date',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_date',
      'is date' => TRUE,
    ),
    'argument' => array(
      'handler' => 'date_views_argument_handler',
      'empty field name' => t('Undated'),
      'is date' => TRUE,
    ),
  );
  
  //describing the fields of the table to views
  $data['testviews']['id'] = array(
    'title' => t('Id of loan'),
    
  );
  
  
  $data['testviews']['nid'] = array(
    'title' => t('Loaned content'),
    'help' => t('Laon that references a node'),
    
    'relationship' => array(
      'base' => 'node',
      'base field' => 'nid',
      'handler' => 'views_handler_relationship',
      'title' => t('Add node relationship'),
      'help' => t('Help shown on this relationship'),
    ),
    
  );
  
  $data['testviews']['uid'] = array(
    'title' => t('Loaner'),
    'help' => t('User that loaned this'),
    
    'relationship' => array(
      'base' => 'users',
      'base field' => 'uid',
      'handler' => 'views_handler_relationship',
      'title' => t('Add user relationship'),
      'help' => t('Help shown on this user relationship'),
    ),
    
  );
    
  return $data;
}