// Required libraries
const request = require('supertest');

// API Gateway URL
const API_GATEWAY_URL = 'http://localhost:8000';

// Integration tests for API Gateway
describe('API Gateway', () => {
  // Test for AI Agents System route
  test('routes to AI Agents System', async () => {
    const response = await request(API_GATEWAY_URL).get('/agents');
    expect(response.statusCode).toBe(200);
  });

  // Test for AI Assistant Platform route
  test('routes to AI Assistant Platform', async () => {
    const response = await request(API_GATEWAY_URL).get('/assistant');
    expect(response.statusCode).toBe(200);
  });

  // Test for Voice Recognition Service route
  test('routes to Voice Recognition Service', async () => {
    const response = await request(API_GATEWAY_URL).get('/voice-recognition');
    expect(response.statusCode).toBe(200);
  });

  // Test for Task Automation Service route
  test('routes to Task Automation Service', async () => {
    const response = await request(API_GATEWAY_URL).get('/task-automation');
    expect(response.statusCode).toBe(200);
  });

  // Test for ElysiumOS route
  test('routes to ElysiumOS', async () => {
    const response = await request(API_GATEWAY_URL).get('/elysiumos');
    expect(response.statusCode).toBe(200);
  });

  // Test for Virtual Butler route
  test('routes to Virtual Butler', async () => {
    const response = await request(API_GATEWAY_URL).get('/virtual-butler');
    expect(response.statusCode).toBe(200);
  });
});