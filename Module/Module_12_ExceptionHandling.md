# Module 12 – Exception Handling

## Topics

* Errors vs. Exceptions
* `try`
* `catch`
* `throw`
* Multiple Catch Blocks
* Standard Exceptions

  * `exception`
  * `invalid_argument`
  * `out_of_range`
  * `runtime_error`
* Custom Exceptions

## Example

```cpp
try
{
    if (age < 0)
        throw invalid_argument("Invalid age");
}
catch (const exception& e)
{
    cout << e.what();
}
```
